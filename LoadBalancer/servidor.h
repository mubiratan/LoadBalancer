#ifndef SERVIDOR_H
#define SERVIDOR_H
#include <vector>
#include <string>
#include <memory>
#include "requisicao.h"

class Servidor
{
public:
    virtual ~Servidor() {};
    std::string _servidorNome;
    static int _countRequisicoes;
    std::vector<Requisicao> _servidorRequisicao;

    virtual const std::string& getServidorNome() = 0;
    virtual void setRequisicao(const Requisicao&) = 0;
    int getCountRequisicoes() const;
    //virtual std::string operation() const = 0;
};

#endif // SERVIDOR_H
