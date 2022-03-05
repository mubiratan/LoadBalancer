#ifndef ServidorFactoryConcretaWindows_h
#define ServidorFactoryConcretaWindows_h
#include "servidorFactory.h"

class ServidorFactoryWindows : public ServidorFactory
{
public:
    ServidorFactoryWindows();
    Servidor* factoryMethod() const override;
};

#endif // ServidorFactoryConcretaWindows_H
