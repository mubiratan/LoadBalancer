#include "servidorFactoryWindows.h"
#include "servidorWindows.h"

ServidorFactoryWindows::ServidorFactoryWindows() {}

Servidor* ServidorFactoryWindows::factoryMethod() const
{
    return new ServidorWindows();
}
