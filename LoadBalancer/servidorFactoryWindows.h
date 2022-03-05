#ifndef ServidorFactoryConcretaWindows_h
#define ServidorFactoryConcretaWindows_h
#include "servidorFactory.h"

class ServidorFactoryWindows : public ServidorFactory
{
public:
    ServidorFactoryWindows();
    Servidor* factoryMethod() const;
};

#endif // ServidorFactoryConcretaWindows_H
