#include "testesLivro.h"

/**
* Definições de métodos.
*/
/**
*Este metodo cria um novo objeto do tipo Titulo;
*/
void TUTitulo::setUp(){
    titulo= new Titulo();
    estado = SUCESSO;
}
/**
*Este metodo destroi o objeto criado para fazer os testes.
*/
void TUTitulo::tearDown(){
    delete titulo;
}
/**
*Este metodo realiza o teste de sucesso, quando o dado esta correto.
*/
void TUTitulo::testarCenarioSucesso(){
    try{
        titulo->setTitulo(TITULO_VALIDO);
        if (titulo->getTitulo() != TITULO_VALIDO){
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
void TUTitulo::testarCenarioFalha(){
    try{
        titulo->setTitulo(TITULO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}
/**
*Este metodo e responsavel por chamar todos os metodos da classe.
*/
int TUTitulo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/**
*Este metodo cria um novo objeto do tipo Data.
*/
void TUData::setUp(){
    data= new Data();
    estado = SUCESSO;
}
/**
*Este metodo destroi o objeto criado para fazer os testes.
*/
void TUData::tearDown(){
    delete data;
}
/**
*Este metodo realiza o teste de sucesso, quando o dado esta correto.
*/
void TUData::testarCenarioSucesso(){
    try{
        data->setData(DATA_VALIDA);
        if (data->getData() != DATA_VALIDA){
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
void TUData::testarCenarioFalha(){
    try{
        data->setData(DATA_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}
/**
*Este metodo e responsavel por chamar todos os metodos da classe.
*/
int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
/**
*Este metodo cria um novo objeto do tipo Codigo.
*/
void TUCodigo::setUp(){
    codigo= new Codigo();
    estado = SUCESSO;
}
/**
*Este metodo destroi o objeto criado para fazer os testes.
*/
void TUCodigo::tearDown(){
    delete codigo;
}
/**
*Este metodo realiza o teste de sucesso, quando o dado esta correto.
*/
void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setCodigo(CODIGO_VALIDO);
        if (codigo->getCodigo() != CODIGO_VALIDO){
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
void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setCodigo(CODIGO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}
/**
*Este metodo e responsavel por chamar todos os metodos da classe.
*/
int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
/**
*Este metodo cria um novo objeto do tipo Texto.
*/
void TUTexto::setUp(){
    texto= new Texto();
    estado = SUCESSO;
}
/**
*Este metodo destroi o objeto criado para fazer os testes.
*/
void TUTexto::tearDown(){
    delete texto;
}
/**
*Este metodo realiza o teste de sucesso, quando o dado esta correto.
*/
void TUTexto::testarCenarioSucesso(){
    try{
        texto->setTexto(TEXTO_VALIDO);
        if (texto->getTexto() != TEXTO_VALIDO){
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
void TUTexto::testarCenarioFalha(){
    try{
        texto->setTexto(TEXTO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}
/**
*Este metodo e responsavel por chamar todos os metodos da classe.
*/
int TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
/**
*Este metodo cria um novo objeto do tipo Genero.
*/
void TUGenero::setUp(){
    genero= new Genero();
    estado = SUCESSO;
}
/**
*Este metodo destroi o objeto criado para fazer os testes.
*/
void TUGenero::tearDown(){
    delete genero;
}
/**
*Este metodo realiza o teste de sucesso, quando o dado esta correto.
*/
void TUGenero::testarCenarioSucesso(){
    try{
        genero->setGenero(GENERO_VALIDO);
        if (genero->getGenero() != GENERO_VALIDO){
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
void TUGenero::testarCenarioFalha(){
    try{
        genero->setGenero(GENERO_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}
/**
*Este metodo e responsavel por chamar todos os metodos da classe.
*/
int TUGenero::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
