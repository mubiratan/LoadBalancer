#ifndef SERVIDORFACTORYLINUX_H
#define SERVIDORFACTORYLINUX_H
#include "servidorFactory.h"

class ServidorFactoryLinux : public ServidorFactory
{
public:
    ServidorFactoryLinux();
    Servidor* factoryMethod() const;
};

#endif // SERVIDORFACTORYLINUX_H
