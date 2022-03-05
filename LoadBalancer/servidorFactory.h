#ifndef SERVIDORFACTORY_H
#define SERVIDORFACTORY_H
#include "servidor.h"
#include "servidorlinux.h"
#include "servidorWindows.h"

class ServidorFactory
{
public:
    virtual ~ServidorFactory(){};
    virtual Servidor* factoryMethod() const = 0;
    Servidor* criarServidor() const;

};

#endif // SERVIDORFACTORY_H
