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

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    virtual void executar(ILNGerente*) throw(runtime_error) = 0;
};

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerenteIncluir:public ComandoIUGerente {

public:

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerenteRemover:public ComandoIUGerente {

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerenteProcurar:public ComandoIUGerente {

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerenteConsultar:public ComandoIUGerente {

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerenteCriar:public ComandoIUGerente {

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

///Classe responsavel por executar os comandos do servico do usuario
class ComandoIUGerenteTrocar:public ComandoIUGerente {

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ILNGerente*) throw(runtime_error);
};


#endif // COMANDOS_H_INCLUDED

