#ifndef SERVIDORWINDOWS_H
#define SERVIDORWINDOWS_H
#include "servidor.h"

class ServidorWindows : public Servidor
{
public:
    std::string _servidorNome;
    int _countRequisicoes;

    const std::string& getServidorNome() override;
    void setRequisicao(const Requisicao&) override;
    int getCountRequisicoes() const override;
};

#endif
