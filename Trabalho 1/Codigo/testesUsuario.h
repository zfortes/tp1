#ifndef TESTESUSUARIO_H_INCLUDED
#define TESTESUSUARIO_H_INCLUDED

#include "dominiosUsuario.h"
#include <string>
using namespace std;

/**
* Declara��o de classe.
*/

/**
* Classe criada para realizar os testes. Nela estarao definidos valores que serao validados nos metodos de cada dominio.
*/
class TUNome {

private:

    /**
    * Defini��es de constantes para evitar numeros m�gicos.
    */

     string NOME_VALIDO   = "diego";
     string NOME_INVALIDO = "20matar70voar";

    /**
    * Refer�ncia para o objeto a ser testado.
    */

    Nome *nome;

    /**
    * Estado do teste.
    */

    int estado;

    /**
    * Declara��es de m�todos.
    */

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /**
    * Defini��es de constantes para reportar resultado do teste.
    */

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/**
* Classe criada para realizar os testes. Nela estarao definidos valores que serao validados nos metodos de cada dominio.
*/

class TUApelido {

private:

    /**
    * Defini��es de constantes para evitar numeros m�gicos.
    */

    string APELIDO_VALIDO   = "jose";
    string APELIDO_INVALIDO = "zezinho";

    /**
    * Refer�ncia para o objeto a ser testado.
    */

    Apelido *apelido;

    /**
    * Estado do teste.
    */

    int estado;

    /**
    * Declara��es de m�todos.
    */

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /**
    * Defini��es de constantes para reportar resultado do teste.
    */

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/**
* Classe criada para realizar os testes. Nela estarao definidos valores que serao validados nos metodos de cada dominio.
*/

class TUTelefone {

private:

    /**
    * Defini��es de constantes para evitar numeros m�gicos.
    */

    string TELEFONE_VALIDO   = "98765432176";
    string TELEFONE_INVALIDO = "9878779";

    /**
    * Refer�ncia para o objeto a ser testado.
    */

    Telefone *telefone;

    /**
    * Estado do teste.
    */

    int estado;

    /**
    * Declara��es de m�todos.
    */

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /**
    * Defini��es de constantes para reportar resultado do teste.
    */

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

/**
* Classe criada para realizar os testes. Nela estarao definidos valores que serao validados nos metodos de cada dominio.
*/

class TUSenha {

private:

    /**
    * Defini��es de constantes para evitar numeros m�gicos.
    ss*/

    string SENHA_VALIDA   = "abcd";
    string SENHA_INVALIDA = "zzer";

    /**
    * Refer�ncia para o objeto a ser testado.
    */

    Senha *senha;

    /**
    * Estado do teste.
    */

    int estado;

    /**
    * Declara��es de m�todos.
    */

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /**
    * Defini��es de constantes para reportar resultado do teste.
    */

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};


#endif // TESTES_H_INCLUDED
