#ifndef REQUISICAO_H
#define REQUISICAO_H
#include <string>

class Requisicao
{
private:
    std::string _nomeRequisicao;
    std::string _descricaoRequisicao;

public:
    Requisicao(const std::string &);
    void setDescricaoRequisicao(const std::string &descricaoRequisicao);
    const std::string &getNomeRequisicao() const;
    const std::string &getDescricaoRequisicao() const;
};

#endif // REQUISICAO_H
