#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

// Declaração de classe.

class Apelido{
private:
        string apelido;

        const static int ascii_a=97;
        const static int ascii_z=122;
        const static int ascii_A=65;
        const static int ascii_Z=90;
        const static int tamanhoMAX_apelido=5;


        void validarApelido(string) throw (invalid_argument);

public:

        void setApelido(string) throw (invalid_argument);

        string getApelido(){
            return apelido;
        }
};
class Nome{
private:

        string nome;

        const static int ascii_a=97;
        const static int ascii_z=122;
        const static int ascii_A=65;
        const static int ascii_Z=90;
        const static int tamanhoMAX_nome=15;

        void validarNome(string) throw (invalid_argument);

public:

        void setNome(string) throw (invalid_argument);

        string getNome(){
        return nome;
        }
    
};

class Senha{
private:

        string senha;

        const static int ascii_a=97;
        const static int ascii_z=122;
        const static int ascii_A=65;
        const static int ascii_Z=90;
        const static int tamanhoMAX_senha=4;

        void validarSenha(string) throw (invalid_argument);

public:

        void setSenha(string) throw (invalid_argument);

        string getSenha(){
            return senha;
        }
    
};

class Telefone{
private:

        string telefone;

        const static int ascii_0=48;
        const static int ascii_9=57;
        const static int tamanho_telefone=11;

        void validarTelefone(string) throw (invalid_argument);

public:

        void setTelefone(string) throw (invalid_argument);

        string getTelefone(){
            return telefone;
        }
    
};

#endif // DOMINIOS_H_INCLUDED
