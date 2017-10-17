#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"
#include "entidades.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerente {

public:

    /// Método por meio do qual é solicitada a execução do comando.

    virtual void executar(ILNGerente*) throw(runtime_error) = 0;
};

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerenteIncluir:public ComandoIUGerente {

public:

    /// Método por meio do qual é solicitada a execução do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerenteRemover:public ComandoIUGerente {

    /// Método por meio do qual é solicitada a execução do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerenteProcurar:public ComandoIUGerente {

    /// Método por meio do qual é solicitada a execução do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerenteConsultar:public ComandoIUGerente {

    /// Método por meio do qual é solicitada a execução do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerenteCriar:public ComandoIUGerente {

    /// Método por meio do qual é solicitada a execução do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerenteTrocar:public ComandoIUGerente {

    /// Método por meio do qual é solicitada a execução do comando.

    void executar(ILNGerente*) throw(runtime_error);
};


#endif // COMANDOS_H_INCLUDED

