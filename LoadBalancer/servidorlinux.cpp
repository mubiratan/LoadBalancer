#include "servidorlinux.h"
#include <string>

const std::string& ServidorLinux::getServidorNome()
{
    _servidorNome = "SERVIDOR LINUX";
    return _servidorNome;
}

void ServidorLinux::setRequisicao(const Requisicao& requisicao)
{
    _servidorRequisicao.emplace_back(requisicao);
    ++_countRequisicoes;
}

//std::string ServidorLinux::operation() const
//{
//    return "Servidor Linux Criado";
//}
