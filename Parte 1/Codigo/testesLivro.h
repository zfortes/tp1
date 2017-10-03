#ifndef TESTESLIVRO_H_INCLUDED
#define TESTESLIVRO_H_INCLUDED

#include "dominiosLivro.h"
#include <string>
using namespace std;

/**
* Declaração de classe.
*/

/**
* Classe criada para realizar os testes. Nela estarao definidos valores que serao validados nos metodos de cada dominio.
*/
class TUTitulo {

private:

    /**
    * Definições de constantes para evitar termos mágicos.
    */
     string TITULO_VALIDO   = "O ceu e azul";
     string TITULO_INVALIDO = "O ceu nao  e azul";

    /**
    * Referencia para o objeto a ser testado.
    */
    Titulo* titulo;

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
class TUData {

private:

    /**
    * Definições de constantes para evitar termos mágicos.
    */

    string DATA_VALIDA   = "311299";
    string DATA_INVALIDA = "331300";

    /**
    * Referência para o objeto a ser testado.
    */

    Data* data;

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
class TUCodigo {

private:

    /**
    * Definições de constantes para evitar termos mágicos.
    */

    string CODIGO_VALIDO   = "76543";
    string CODIGO_INVALIDO = "1234";

    /**
    * Referência para o objeto a ser testado.
    */

    Codigo* codigo;

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
class TUTexto {

private:

    /**
    * Definições de constantes para evitar numeros mágicos.
    */

    string TEXTO_VALIDO   = "Quando estava caminhando, eu o vi.";
    string TEXTO_INVALIDO = "Durante a segunda guerra mundial, os judeus foram capturados.";

    /**
    * Referência para o objeto a ser testado.
    */

    Texto* texto;

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
class TUGenero {

private:

    /**
    * Definições de constantes para evitar numeros mágicos.
    */
    string GENERO_VALIDO   = "EPOPEIA";
    string GENERO_INVALIDO = "FABULA";

    /**
    * Referência para o objeto a ser testado.
    */

    Genero* genero;

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

#endif
