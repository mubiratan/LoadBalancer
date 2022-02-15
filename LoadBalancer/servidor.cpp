#include "servidor.h"

Servidor::Servidor(std::string nome)
{
    _countRequisicoes = 0;
    _servidorNome = nome;
}

const std::string & Servidor::getServidorNome()
{
    return _servidorNome;
}

void Servidor::setRequisicao(const Requisicao &requisicao)
{
    _servidorRequisicao.emplace_back(requisicao);
    ++_countRequisicoes;
}

int Servidor::getCountRequisicoes() const
{
    return _countRequisicoes;
}
