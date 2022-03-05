#include <iostream>
#include <vector>
#include "servidor.h"
#include "loadbalancer.h"
#include "servidorlinux.h"
#include "servidorFactory.h"
#include "servidorFactoryLinux.h"
#include "servidorFactoryWindows.h"


void criar(const ServidorFactory& creator) {
    creator.criarServidor();
}

int main()
{
    // Cria os servidores através da fábrica
    ServidorFactory* servidorLinux = new ServidorFactoryLinux();
    criar(*servidorLinux);

    ServidorFactory* servidorWindows = new ServidorFactoryWindows();
    criar(*servidorWindows);

    // Cria objeto LoadBalancer
    //LoadBalancer loadBalancer;

    // Adciona servidores na lista do Load Balancer
    //loadBalancer.setServidor(servidor1);
//    loadBalancer.setServidor(servidor2);
//    loadBalancer.setServidor(servidor3);

//    // Lista servidores criados
//    std::cout << "### Criando Servidores ###" << std::endl;
//    for(Servidor s : loadBalancer.getListServidores())
//    {
//        std::cout << s.getServidorNome() << std::endl;
//    }

//    // Inicia Load Balancer
//    loadBalancer.init();

    return 0;
}


