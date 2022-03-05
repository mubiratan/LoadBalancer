#ifndef SERVIDORLINUX_H
#define SERVIDORLINUX_H
#include "servidor.h"

class ServidorLinux : public Servidor
{
public:
    std::string _servidorNome;
    int _countRequisicoes;

    const std::string& getServidorNome() override;
    void setRequisicao(const Requisicao&) override;
    int getCountRequisicoes() const override;
};

#endif // SERVIDORLINUX_H
