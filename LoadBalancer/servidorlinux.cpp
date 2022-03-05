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

int ServidorLinux::getCountRequisicoes() const
{
    return _countRequisicoes;
}
