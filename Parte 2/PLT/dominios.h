#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

/**
* Declara��o de classe.
*/

/**
*Esta classe armazena uma string com o Apelido do usuario. Ela chama um metodo para validar essa string.
* Possui tambem dois metodos que interagem com a parte privada dela. Um para setar a string e um para pegar o valor da string.
*/
class Apelido{
private:
        string apelido;

        const static int ascii_a=97; /**Valor constante, armazena o valor ascii de a*/
        const static int ascii_z=122; /**Valor constante, armazena o valor ascii de z*/
        const static int ascii_A=65; /**Valor constante, armazena o valor ascii de A*/
        const static int ascii_Z=90; /**Valor constante, armazena o valor ascii de Z*/
        const static int tamanhoMAX_apelido=5; /**Valor constante, armazena o valor maximo de caracteres permitidos na string*/

        ///Metodo responsavel por validar o conteudo que vai ser inserido na variavel
        void validarApelido(string) throw (invalid_argument);

public:
        ///Metodo responsavel por atribuir o conteudo na variavel
        void setApelido(string) throw (invalid_argument);
        ///Metodo responsavel por pegar o valor da variavel
        string getApelido(){
            return apelido;
        }
};
/**
*Esta classe armazena uma string com o Nome do usuario. Ela chama um metodo para validar essa string.
* Possui tambem dois metodos que interagem com a parte privada dela. Um para setar a string e um para pegar o valor da string.
*/
class Nome{
private:

        string nome;

        const static int ascii_a=97; /**Valor constante, armazena o valor ascii de a*/
        const static int ascii_z=122; /**Valor constante, armazena o valor ascii de z*/
        const static int ascii_A=65; /**Valor constante, armazena o valor ascii de A*/
        const static int ascii_Z=90; /**Valor constante, armazena o valor ascii de Z*/
        const static int tamanhoMAX_nome=15; /**Valor constante, armazena o valor maximo de caracteres permeitods na string*/

public:

        ///Metodo responsavel por validar o conteudo que vai ser inserido na variavel
        static void validarNome(string) throw (invalid_argument);

        ///Metodo responsavel por atribuir o conteudo na variavel
        void setNome(string) throw (invalid_argument);

        ///Metodo responsavel por pegar o valor da variavel
        string getNome(){
        return nome;
        }

};
/**
*Esta classe armazena uma string com A senha do usuario. Ela chama um metodo para validar essa string.
* Possui tambem dois metodos que interagem com a parte privada dela. Um para setar a string e um para pegar o valor da string.
*/
class Senha{
private:

        string senha;

        const static int ascii_a=97; /**Valor constante, armazena o valor ascii de a*/
        const static int ascii_z=122; /**Valor constante, armazena o valor ascii de z*/
        const static int ascii_A=65; /**Valor constante, armazena o valor ascii de A*/
        const static int ascii_Z=90; /**Valor constante, armazena o valor ascii de Z*/
        const static int tamanhoMAX_senha=4;  /**Valor constante, armazena o valor maximo de caracteres permitidos na string*/

        ///Metodo responsavel por validar o conteudo que vai ser inserido na variavel
        void validarSenha(string) throw (invalid_argument);

public:
        ///Metodo responsavel por atribuir o conteudo na variavel
        void setSenha(string) throw (invalid_argument);

        ///Metodo responsavel por pegar o valor da variavel
        string getSenha(){
            return senha;
        }

};
/**
*Esta classe armazena uma string com o Nome do usuario. Ela chama um metodo para validar essa string.
* Possui tambem dois metodos que interagem com a parte privada dela. Um para setar a string e um para pegar o valor da string.
*/
class Telefone{
private:

        string telefone;

        const static int ascii_0=48;   /**Valor constante, armazena o valor ascii do 0*/
        const static int ascii_9=57;   /**Valor constante, armazena o valor ascii do 9 */
        const static int tamanhoMAX_telefone=11;  /**Valor constante, armazena o valor maximo de caracteres permitidos na string*/

        ///Metodo responsavel por validar o conteudo que vai ser inserido na variavel
        void validarTelefone(string) throw (invalid_argument);

public:
        ///Metodo responsavel por atribuir o conteudo na variavel
        void setTelefone(string) throw (invalid_argument);

        ///Metodo responsavel por pegar o valor da variavel
        string getTelefone(){
            return telefone;
        }

};

/**
* Declara��o de classe.
*/
/**
*Esta classe armazena uma string com o titulo do livro. Ela chama um metodo para validar essa string.
* Possui tambem dois metodos que interagem com a parte privada dela. Um para setar a string e um para pegar o valor da string.
*/
class Titulo{
private:
        string titulo;

        const static int tamanhoMAX_titulo=20;  /**< Valor constante com o tamanho maximo do titulo>*/

        ///Metodo responsavel por validar o conteudo que vai ser inserido na variavel
        void validarTitulo(string) throw (invalid_argument);

public:
        ///Metodo responsavel por atribuir o conteudo na variavel
        void setTitulo(string) throw (invalid_argument);

        ///Metodo responsavel por pegar o valor da variavel
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
        const static int tamanhoMAX_data=8; /** Valor constate, armazena o numero maximo de caracteres que podem estar na string*/
        
        ///Metodo responsavel por validar o conteudo que vai ser inserido na variavel
        void validarData(string) throw (invalid_argument);

public:
        ///Metodo responsavel por atribuir o conteudo na variavel
        void setData(string) throw (invalid_argument);

        ///Metodo responsavel por pegar o valor da variavel
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

        ///Metodo responsavel por validar o conteudo que vai ser inserido na variavel
        void validarCodigo(string) throw (invalid_argument);

public:
        ///Metodo responsavel por atribuir o conteudo na variavel
        void setCodigo(string) throw (invalid_argument);

        ///Metodo responsavel por pegar o valor da variavel
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

        ///Metodo responsavel por validar o conteudo que vai ser inserido na variavel
        void validarTexto(string) throw (invalid_argument);

public:
        ///Metodo responsavel por atribuir o conteudo na variavel
        void setTexto(string) throw (invalid_argument);

        ///Metodo responsavel por pegar o valor da variavel
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

        ///Metodo responsavel por validar o conteudo que vai ser inserido na variavel
        void validarGenero(string) throw (invalid_argument);
public:
        ///Metodo responsavel por atribuir o conteudo na variavel
        void setGenero(string) throw (invalid_argument);

        ///Metodo responsavel por pegar o valor da variavel
        string getGenero(){
            return genero;
        }

};

/**
*   Esta classe herda os metodos da classe nome, afinal faz a mesma coisa, porem para o nome do autor.
*/

class NomeAutor: public Nome{

private:

    string nomeAutor;

private:

};

#endif // DOMINIOS_H_INCLUDED

