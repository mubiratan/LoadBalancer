#include <iostream>
#include <vector>
#include "servidor.h"
#include "loadbalancer.h"

int main()
{
    // Cria os servidores
    Servidor servidor1("Servidor 1");
    Servidor servidor2("Servidor 2");
    Servidor servidor3("Servidor 3");

    // Cria objeto LoadBalancer
    LoadBalancer loadBalancer;

    // Adciona servidores na lista do Load Balancer
    loadBalancer.setServidor(servidor1);
    loadBalancer.setServidor(servidor2);
    loadBalancer.setServidor(servidor3);

    // Lista servidores criados
    std::cout << "### Criando Servidores ###" << std::endl;
    for(Servidor s : loadBalancer.getListServidores())
    {
        std::cout << s.getServidorNome() << std::endl;
    }

    // Inicia Load Balancer
    loadBalancer.init();

    return 0;
}
