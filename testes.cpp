#include "testes.h"
#include <iostream>

// Definições de métodos.

void TUNome::setUp(){
    nome= new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(NOME_VALIDO);
        if (nome->getNome() != NOME_VALIDO){
            estado = FALHA;
        }
        else{
            cout<<"Cenario Sucesso Nome: OK ";
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(NOME_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
//

void TUSenha::setUp(){
    senha= new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(SENHA_VALIDA);
        if (senha->getSenha() != SENHA_VALIDA){
            estado = FALHA;
        }
        else{
            cout<<"Cenario Sucesso Senha: OK ";
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    };
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(SENHA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUApelido::setUp(){
    apelido= new Apelido();
    estado = SUCESSO;
}

void TUApelido::tearDown(){
    delete apelido;
}

void TUApelido::testarCenarioSucesso(){
    try{
        apelido->setApelido(APELIDO_VALIDO);
        if (apelido->getApelido() != APELIDO_VALIDO){
            estado = FALHA;
        }
        else{
            cout<<"Cenario Sucesso Apelido: OK ";
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUApelido::testarCenarioFalha(){
    try{
        apelido->setApelido(APELIDO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TUApelido::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//

void TUTelefone::setUp(){
    telefone= new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete telefone;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->setTelefone(TELEFONE_VALIDO);
        if (telefone->getTelefone() != TELEFONE_VALIDO){
            estado = FALHA;
        }
        else{
            cout<<"Cenario Sucesso Telefone: OK ";
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        telefone->setTelefone(TELEFONE_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
