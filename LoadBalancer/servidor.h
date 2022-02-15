#ifndef SERVIDOR_H
#define SERVIDOR_H
#include <vector>
#include <string>
#include <memory>
#include "requisicao.h"

class Servidor
{
private:
    int servidor_size = 10;
    std::string _servidorNome;
    int _countRequisicoes;

public:
    Servidor(std::string = "");
    std::vector<Requisicao> _servidorRequisicao;

    const std::string &getServidorNome();
    void setRequisicao(const Requisicao&);
    int getCountRequisicoes() const;
};

#endif // SERVIDOR_H
