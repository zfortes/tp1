#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <stdexcept>

using namespace std;

/// Declaracao adiantada.
class ILNGerente;

/// Declaração de interface da camada de apresentação.

class IUGerente {
public:

    /// Método por meio do qual é solicitada autenticacao.

    virtual void executar(Apelido&) throw(runtime_error) = 0;

    /// Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrLNGerente(ILNGerente *) = 0;
};

/**
* Declaração de interface da camada de negócio
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
