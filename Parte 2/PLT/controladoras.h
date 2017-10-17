#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;




/** Classe resposavel pelo loguin do usuario onde estao os metodos
* que serao utilizados para verificar os dados e conferir o cadastro de novos usuarios;
**/
class InterfaceLoguin{
private:
    int autenticado;
    string apelidoLido;
    string senhaLido;
public:
    InterfaceLoguin(){
        autenticado=-5;
    }
    
    void autenticar(InterfaceLoguin* user) throw(invalid_argument);
    int menuInicial(InterfaceLoguin* user) throw(invalid_argument);
    string getApelido();
    string getSenha();
    void setAutenticado(int i);
    void menuCadastro() throw(invalid_argument);
    void menuAutentica(InterfaceLoguin* user) throw(invalid_argument);
};

/// Declara��o de controladora de intera��o para o servi�o de Usuario.

class CntrIUGerente:public IUGerente {

private:


    const static int INCLUIR   = 1;
    const static int REMOVER   = 2;
    const static int PROCURAR  = 3;
    const static int CONSULTAR = 4;
    const static int CRIAR     = 5;
    const static int TROCAR    = 6;
    const static int RETORNAR  = 7;

    /// Refer�ncia para servidor.

    ILNGerente *cntrLNGerente;

public:

    /// M�todo previsto na interface por meio do qual � solicitada execu��o da controladora.

    void executar(Apelido&) throw(runtime_error);

    /// M�todo por meio do qual � estabelecido relacionamento com o servidor.

    void setCntrLNGerente(ILNGerente *cntrLNGerente){
        this->cntrLNGerente = cntrLNGerente;
    }
};


#endif // CONTROLADORAS_H_INCLUDED
