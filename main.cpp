#include <iostream>
#include "testes.h"
#include "dominios.h"

using namespace std;

int main (){

	TUNome testeNome;

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO NOME"<<endl;
                                break;
        case TUNome::FALHA  : cout << "Cenario FALHA NOME: ok"<<endl;
                                break;
    }

    TUSenha testeSenha;

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO Senha"<<endl;
                                break;
        case TUSenha::FALHA  : cout << "Cenario FALHA Senha: ok"<<endl;
                                break;
    }

    TUApelido testeApelido;

    switch(testeApelido.run()){
        case TUApelido::SUCESSO: cout << "SUCESSO Apelido"<<endl;
                                break;
        case TUApelido::FALHA  : cout << "Cenario FALHA Apelido: ok"<<endl;
                                break;
    }

    TUTelefone testeTelefone;

    switch(testeTelefone.run()){
        case TUTelefone::SUCESSO: cout << "SUCESSO Telefone"<<endl;
                                break;
        case TUTelefone::FALHA  : cout << "Cenario FALHA Telefone: ok"<<endl;
                                break;
    }

    return 0;
}