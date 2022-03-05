#include "servidorFactoryWindows.h"

ServidorFactoryWindows::ServidorFactoryWindows() {}

Servidor* ServidorFactoryWindows::factoryMethod() const
{
    return new ServidorWindows();
}
