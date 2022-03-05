#ifndef SERVIDORFACTORY_H
#define SERVIDORFACTORY_H
#include "servidor.h"
#include "servidorlinux.h"

class ServidorFactory
{
public:
    virtual ~ServidorFactory(){};
    virtual Servidor* factoryMethod() const = 0;
    void criarServidor() const;

};

#endif // SERVIDORFACTORY_H
