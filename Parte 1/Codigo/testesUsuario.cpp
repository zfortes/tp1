#include "testesUsuario.h"

/**
* Definições de métodos.
*/

/**
*Este metodo cria um novo objeto do tipo Nome;
*/
void TUNome::setUp(){
    nome= new Nome();
    estado = SUCESSO;
}
/**
*Este metodo destroi o objeto criado para fazer os testes.
*/
void TUNome::tearDown(){
    delete nome;
}
/**
*Este metodo realiza o teste de sucesso, quando o dado esta correto.
*/
void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(NOME_VALIDO);
        if (nome->getNome() != NOME_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
/**
*Este metodo realiza o teste de falha, quando o dado esta incorreto.
*/
void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(NOME_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}
/**
*Este metodo e responsavel por chamar todos os metodos da classe.
*/
int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/**
*Este metodo cria um novo objeto do tipo Senha.
*/
void TUSenha::setUp(){
    senha= new Senha();
    estado = SUCESSO;
}
/**
*Este metodo destroi o objeto criado para fazer os testes
*/
void TUSenha::tearDown(){
    delete senha;
}
/**
*Este metodo realiza o teste de sucesso, quando o dado esta correto.
*/
void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(SENHA_VALIDA);
        if (senha->getSenha() != SENHA_VALIDA){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    };
}
/**
*Este metodo realiza o teste de falha, quando o dado esta incorreto.
*/
void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(SENHA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}
/**
*Este metodo e responsavel por chamar todos os metodos da classe.
*/
int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/**
*Este metodo cria um novo objeto do tipo Apelido.
*/
void TUApelido::setUp(){
    apelido= new Apelido();
    estado = SUCESSO;
}
/**
*Este metodo destroi o objeto criado para fazer os testes.
*/
void TUApelido::tearDown(){
    delete apelido;
}
/**
*Este metodo realiza o teste de sucesso, quando o dado esta correto.
*/
void TUApelido::testarCenarioSucesso(){
    try{
        apelido->setApelido(APELIDO_VALIDO);
        if (apelido->getApelido() != APELIDO_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
/**
*Este metodo realiza o teste de falha, quando o dado esta incorreto.
*/
void TUApelido::testarCenarioFalha(){
    try{
        apelido->setApelido(APELIDO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}
/**
*Este metodo e responsavel por chamar todos os metodos da classe.
*/
int TUApelido::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/**
*Este metodo cria um novo objeto do tipo Telefone.
*/
void TUTelefone::setUp(){
    telefone= new Telefone();
    estado = SUCESSO;
}
/**
*Este metodo destroi o objeto criado para fazer os testes.
*/
void TUTelefone::tearDown(){
    delete telefone;
}
/**
*Este metodo realiza o teste de sucesso, quando o dado esta correto.
*/
void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->setTelefone(TELEFONE_VALIDO);
        if (telefone->getTelefone() != TELEFONE_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}
/**
*Este metodo realiza o teste de falha, quando o dado esta incorreto.
*/
void TUTelefone::testarCenarioFalha(){
    try{
        telefone->setTelefone(TELEFONE_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}
/**
* Este metodo e responsavel por chamar todos os metodos da classe.
*/
int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
