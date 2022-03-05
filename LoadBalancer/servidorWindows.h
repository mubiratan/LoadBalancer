#ifndef ServidorWindows_H
#define ServidorWindows_h
#include "servidor.h"

class ServidorWindows : public Servidor
{
public:
    std::string _servidorNome;
    int _countRequisicoes;

    const std::string& getServidorNome() override;
    void setRequisicao(const Requisicao&) override;
    //std::string operation() const override;
};

#endif // ServidorWindows
