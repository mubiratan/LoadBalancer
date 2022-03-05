#include "servidorFactory.h"
#include <iostream>

void ServidorFactory::criarServidor() const {
    // Call the factory method to create a Server object.
    Servidor* servidor = this->factoryMethod();
    std::cout << "Servidor criado: " << servidor->getServidorNome() << std::endl;

    delete servidor;
}
