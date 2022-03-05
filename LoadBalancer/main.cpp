#include <iostream>
#include <vector>
#include "servidor.h"
#include "loadbalancer.h"
#include "servidorlinux.h"
#include "servidorWindows.h"
#include "servidorFactory.h"
#include "servidorFactoryLinux.h"
#include "servidorFactoryWindows.h"

int main()
{
    // Cria os servidores através da fábrica
    ServidorFactoryLinux servidorFactoryLinux;
    Servidor* servidorLinux = servidorFactoryLinux.criarServidor();
    Servidor* servidorLinux2 = servidorFactoryLinux.criarServidor();

    ServidorFactoryWindows servidorFactoryWindows;
    Servidor* servidorWindows = servidorFactoryWindows.criarServidor();

    //Cria objeto LoadBalancer
    LoadBalancer loadBalancer;

    // Adciona servidores na lista do Load Balancer
    loadBalancer.setServidor(servidorLinux);
    loadBalancer.setServidor(servidorWindows);
    loadBalancer.setServidor(servidorLinux2);

    // Lista servidores criados
    std::cout << "### Criando Servidores ###" << std::endl;
    for(Servidor* s : loadBalancer.getListServidores())
    {
        std::cout << s->getServidorNome() << std::endl;
    }

    // Inicia Load Balancer
    loadBalancer.init();

    return 0;
}


