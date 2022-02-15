#include "loadbalancer.h"
#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <boost/beast/core.hpp>
#include <boost/beast/websocket.hpp>
#include <servidor.h>

LoadBalancer::LoadBalancer() {}

/**
 * Inicia Load Balancer
 */
void LoadBalancer::init()
{
    std::cout << "### LOAD BALANCER INICIALIZADO ###" << std::endl;

    while(1)
    {
        tcp::socket socket{ioc};
        acceptor.accept(socket);

        std::cout << "--- Socket Accepted ---" << std::endl;

        std::thread{[this, q = std::move(socket)]() mutable {
            boost::beast::websocket::stream<tcp::socket> ws{std::move(q)};

            ws.accept();

            while(1)
            {
                boost::beast::flat_buffer buffer;
                ws.read(buffer);

                std::string out = boost::beast::buffers_to_string(buffer.cdata());

                // Processa a requisicao
                processaRequisicao(out);
            }
        }}.detach();
    }
}

/**
 * Processa a requisição do websocket
 */
void LoadBalancer::processaRequisicao(const std::string & mensagem)
{
    std::cout << mensagem << std::endl;

    //Cria obejto requisicao
    Requisicao requisicao("Requisicao");
    requisicao.setDescricaoRequisicao(mensagem);

    // Retorna servidor com menor carga
    retornaServidorMenorCarga().setRequisicao(std::move(requisicao));

    for(Servidor s : getListServidores())
    {
        std::cout << "Nome Servidor: " << s.getServidorNome()
                  << "  Qtd Requisições : " << s.getCountRequisicoes()
                  << std::endl;
    }

    std::cout << std::endl;
}

/**
 * Retorna servidor com menor carga
 */
Servidor& LoadBalancer::retornaServidorMenorCarga()
{
    std::sort(_loadBalancerServidores.begin()
              , _loadBalancerServidores.end()
              , [] (Servidor &x, Servidor &y) { return x.getCountRequisicoes() > y.getCountRequisicoes();}
              );

    return getListServidores().back();
}

/**
 * Insere servidor no vector
 */
void LoadBalancer::setServidor(Servidor &servidor)
{
    _loadBalancerServidores.emplace_back(servidor);
}

/**
 * Retorna servidor do vector
 */
Servidor& LoadBalancer::getServidor()
{
    return _loadBalancerServidores.back();
}

/**
 * Retorna lista de servidores
 */
std::vector<Servidor>& LoadBalancer::getListServidores()
{
    return _loadBalancerServidores;
}
