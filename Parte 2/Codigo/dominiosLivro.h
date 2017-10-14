#ifndef DOMINIOSLIVRO_H_INCLUDED
#define DOMINIOSLIVRO_H_INCLUDED

#include <stdexcept>

using namespace std;

/**
* Declaração de classe.
*/
/**
*Esta classe armazena uma string com o titulo do livro. Ela chama um metodo para validar essa string.
* Possui tambem dois metodos que interagem com a parte privada dela. Um para setar a string e um para pegar o valor da string.
*/
class Titulo{
private:
        string titulo;

        const static int tamanhoMAX_titulo=20;  /**< Valor constante com o tamanho maximo do titulo>*/


        void validarTitulo(string) throw (invalid_argument);

public:

        void setTitulo(string) throw (invalid_argument);

        string getTitulo(){
            return titulo;
        }
};
/**
*Esta classe armazena uma string com a data de publicao do livro. Ela chama um metodo para validar essa string.
* Possui tambem dois metodos que interagem com a parte privada dela. Um para setar a string e um para pegar o valor da string.
*/
class Data{
private:

        string data;

        const static int ANOS=99;  /**Valor constante, armazena o numero maximo de anos*/
        const static int MESES=12;  /**Valor constante, armazena o numero maximo de meses*/
        const static int DIAS=31; /** Valor constante, armazena o numero maximo de dias*/
        const static int tamanhoMAX_data=6; /** Valor constate, armazena o numero maximo de caracteres que podem estar na string*/
        void validarData(string) throw (invalid_argument);

public:

        void setData(string) throw (invalid_argument);

        string getData(){
        return data;
        }

};
/**
*Esta classe armazena uma string com o Codigo do livro. Ela chama um metodo para validar essa string.
* Possui tambem dois metodos que interagem com a parte privada dela. Um para setar a string e um para pegar o valor da string.
*/
class Codigo{
private:

        string codigo;

        const static int ascii_0=48;   /**Valor constante, armazena o valor ascii do 0*/
        const static int ascii_9=57;   /**Valor constante, armazena o valor ascii do 9 */
        const static int tamanhoMAX_codigo=5;  /**Valor constante, armazena o valor maximo de caracteres que a string pode conter */

        void validarCodigo(string) throw (invalid_argument);

public:

        void setCodigo(string) throw (invalid_argument);

        string getCodigo(){
            return codigo;
        }

};
/**
*Esta classe armazena uma string com um Texto relacionado ao livro. Ela chama um metodo para validar essa string.
* Possui tambem dois metodos que interagem com a parte privada dela. Um para setar a string e um para pegar o valor da string.
*/
class Texto{
private:

        string texto;

        const static int tamanhoMAX_texto=40; /**Valor constante, armazena o valor maximo de caracteres permitidos no texto  */

        void validarTexto(string) throw (invalid_argument);

public:

        void setTexto(string) throw (invalid_argument);

        string getTexto(){
            return texto;
        }
};
/**
* Esta classe armazena uma string com o Genero do livro. Ela chama um metodo para validar essa string.
* Possui tambem dois metodos que interagem com a parte privada dela. Um para setar a string e um para pegar o valor da string.
*/
class Genero{
private:
        string genero;

        void validarGenero(string) throw (invalid_argument);
public:

        void setGenero(string) throw (invalid_argument);

        string getGenero(){
            return genero;
        }

};

#endif // DOMINIOS_H_INCLUDED
