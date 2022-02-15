#include "requisicao.h"

Requisicao::Requisicao(const std::string &nomeRequisicao)
{
    _nomeRequisicao = nomeRequisicao;
}

const std::string &Requisicao::getDescricaoRequisicao() const
{
    return _descricaoRequisicao;
}

void Requisicao::setDescricaoRequisicao(const std::string &descricaoRequisicao)
{
    _descricaoRequisicao = descricaoRequisicao;
}
