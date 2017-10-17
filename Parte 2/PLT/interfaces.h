#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <stdexcept>

using namespace std;

/// Declaracao adiantada.
class ILNGerente;

/// Declara��o de interface da camada de apresenta��o.

class IUGerente {
public:

    /// M�todo por meio do qual � solicitada autenticacao.

    virtual void executar(Apelido&) throw(runtime_error) = 0;

    /// M�todo por meio do qual � estabelecida liga��o (link) com a controladora de neg�cio.

    virtual void setCntrLNGerente(ILNGerente *) = 0;
};

/**
* Declara��o de interface da camada de neg�cio
*/

class ILNGerente {
public:
    virtual Resultado incluir(Livro&) throw(runtime_error) = 0;  //Metodo virtual para Incluir um livro
    virtual Resultado remover(Titulo&) throw(runtime_error) = 0;    //Metodo virtual para remover um livro
    virtual ResultadoGerente procurar(Apelido&) throw(runtime_error) = 0; //Metodo virtual Procurar um usuario
    virtual ResultadoLivro consultar(Titulo&) throw(runtime_error) = 0; //Metodo virtual para Consultar um livro
    virtual Resultado criar(Resenha&) throw(runtime_error) = 0;    ///Metodo para Criar uma resenha sobre um livro;
    virtual ResultadoGerente trocar(Titulo&) throw(runtime_error) = 0;    ///Metodo para trocar um livro com outro usuario;
};

#endif // INTERFACES_H_INCLUDED
