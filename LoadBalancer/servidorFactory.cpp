#include "servidorFactory.h"
#include <iostream>

Servidor* ServidorFactory::criarServidor() const {
    // Call the factory method to create a Server object.
    return this->factoryMethod();
}
