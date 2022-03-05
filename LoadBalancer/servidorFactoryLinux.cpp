#include "servidorFactoryLinux.h"

ServidorFactoryLinux::ServidorFactoryLinux() {}

Servidor* ServidorFactoryLinux::factoryMethod() const
{
    return new ServidorLinux();
}
