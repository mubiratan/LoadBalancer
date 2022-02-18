#ifndef LOADBALANCER_H
#define LOADBALANCER_H

#include <boost/beast/core.hpp>
#include <boost/beast/websocket.hpp>
#include <vector>
#include <servidor.h>

using tcp = boost::asio::ip::tcp;

auto const address = boost::asio::ip::make_address("127.0.0.1");
auto const port = static_cast<unsigned short>(std::atoi("8083"));

class LoadBalancer
{
private:
    boost::asio::io_context ioc{1};
    boost::asio::ip::tcp::acceptor acceptor{ioc, {address, port}};
    Servidor& retornaServidorMenorCarga();
    void processaRequisicao(const std::string &);

public:
    LoadBalancer();
    void init();
    void setServidor(Servidor &);
    Servidor &getServidor();
    std::vector<Servidor> &getListServidores();
    static void ordenaListaServidores(std::vector<Servidor> &);
    std::vector<Servidor> _loadBalancerServidores;
};

#endif // LOADBALANCER_H
