#ifndef DOMINIOSUSUARIO_H_INCLUDED
#define DOMINIOSUSUARIO_H_INCLUDED

#include <stdexcept>

using namespace std;

/**
* Declaração de classe.
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


        void validarApelido(string) throw (invalid_argument);

public:

        void setApelido(string) throw (invalid_argument);

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

        void validarNome(string) throw (invalid_argument);

public:

        void setNome(string) throw (invalid_argument);

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

        void validarSenha(string) throw (invalid_argument);

public:

        void setSenha(string) throw (invalid_argument);

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

        void validarTelefone(string) throw (invalid_argument);

public:

        void setTelefone(string) throw (invalid_argument);

        string getTelefone(){
            return telefone;
        }

};

#endif // DOMINIOS_H_INCLUDED
