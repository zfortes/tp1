#ifndef TESTESUSUARIO_H_INCLUDED
#define TESTESUSUARIO_H_INCLUDED

#include "dominiosUsuario.h"
#include <string>
using namespace std;

/**
* Declaração de classe.
*/

/**
* Classe criada para realizar os testes. Nela estarao definidos valores que serao validados nos metodos de cada dominio.
*/
class TUNome {

private:

    /**
    * Definições de constantes para evitar numeros mágicos.
    */

     string NOME_VALIDO   = "diego";
     string NOME_INVALIDO = "20matar70voar";

    /**
    * Referência para o objeto a ser testado.
    */

    Nome *nome;

    /**
    * Estado do teste.
    */

    int estado;

    /**
    * Declarações de métodos.
    */

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /**
    * Definições de constantes para reportar resultado do teste.
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
    * Definições de constantes para evitar numeros mágicos.
    */

    string APELIDO_VALIDO   = "jose";
    string APELIDO_INVALIDO = "zezinho";

    /**
    * Referência para o objeto a ser testado.
    */

    Apelido *apelido;

    /**
    * Estado do teste.
    */

    int estado;

    /**
    * Declarações de métodos.
    */

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /**
    * Definições de constantes para reportar resultado do teste.
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
    * Definições de constantes para evitar numeros mágicos.
    */

    string TELEFONE_VALIDO   = "98765432176";
    string TELEFONE_INVALIDO = "9878779";

    /**
    * Referência para o objeto a ser testado.
    */

    Telefone *telefone;

    /**
    * Estado do teste.
    */

    int estado;

    /**
    * Declarações de métodos.
    */

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /**
    * Definições de constantes para reportar resultado do teste.
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
    * Definições de constantes para evitar numeros mágicos.
    ss*/

    string SENHA_VALIDA   = "abcd";
    string SENHA_INVALIDA = "zzer";

    /**
    * Referência para o objeto a ser testado.
    */

    Senha *senha;

    /**
    * Estado do teste.
    */

    int estado;

    /**
    * Declarações de métodos.
    */

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    /**
    * Definições de constantes para reportar resultado do teste.
    */

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};


#endif // TESTES_H_INCLUDED
