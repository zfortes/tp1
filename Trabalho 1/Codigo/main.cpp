#include <iostream>
#include <cstdlib>
#include "testesUsuario.h"
#include "dominiosUsuario.h"
#include "testesLivro.h"
#include "dominiosLivro.h"

using namespace std;
/**
*A main faz todas as chamadas de testes dos dominios e mostra na tela.
*/
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

    TUTitulo testeTitulo;

    switch(testeTitulo.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO Titulo"<<endl;
                                break;
        case TUTitulo::FALHA  : cout << "Cenario FALHA Titulo: ok"<<endl;
                                break;
    }

    TUData testeData;

    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO Data"<<endl;
                                break;
        case TUData::FALHA  : cout << "Cenario FALha Data: ok"<<endl;
                                break;
    }

    TUCodigo testeCodigo;

    switch(testeCodigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO Codigo"<<endl;
                                break;
        case TUCodigo::FALHA  : cout << "Cenario FALHA Codigo: ok"<<endl;
                                break;
    }

    TUTexto testeTexto;

    switch(testeTexto.run()){
        case TUTexto::SUCESSO: cout << "SUCESSO Texto"<<endl;
                                break;
        case TUTexto::FALHA  : cout << "Cenario FALHA Texto: ok"<<endl;
                                break;
    }

    TUGenero testeGenero;

    switch(testeGenero.run()){
        case TUGenero::SUCESSO: cout << "SUCESSO Genero"<<endl;
                                break;
        case TUGenero::FALHA  : cout << "Cenario FALHA genero: ok"<<endl;
                                break;
    }
    system("pause");
    return 0;
}
