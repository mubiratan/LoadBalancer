#include "servidorWindows.h"
#include <string>

const std::string& ServidorWindows::getServidorNome()
{
    _servidorNome = "SERVIDOR WINDOWS";
    return _servidorNome;
}

void ServidorWindows::setRequisicao(const Requisicao& requisicao)
{
    _servidorRequisicao.emplace_back(requisicao);
    ++_countRequisicoes;
}

int ServidorWindows::getCountRequisicoes() const
{
    return _countRequisicoes;
}
