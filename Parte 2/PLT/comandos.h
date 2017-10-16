#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"
#include "entidades.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>


class ComandoIUGerente {

public:

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    virtual void executar(ILNGerente*) throw(runtime_error) = 0;
};

class ComandoIUGerenteIncluir:public ComandoIUGerente {

public:

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

class ComandoIUGerenteRemover:public ComandoIUGerente {

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

class ComandoIUGerenteProcurar:public ComandoIUGerente {

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

class ComandoIUGerenteConsultar:public ComandoIUGerente {

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ILNGerente*) throw(runtime_error);
};

class ComandoIUGerenteCriar:public ComandoIUGerente {

    /// M�todo por meio do qual � solicitada a execu��o do comando.

    void executar(ILNGerente*) throw(runtime_error);
};


#endif // COMANDOS_H_INCLUDED

