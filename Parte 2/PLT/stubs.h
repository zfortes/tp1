#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "interfaces.h"
#include <stdexcept>
#include <iostream>
#include "entidades.h"
#include "dominios.h"
#include "controladoras.h"

using namespace std;

/** Declaração de classe stub da interface StubAutenticacao.
*Classe que funciona como stub para as funcoes de autenticacao e cadastro
**/
class StubAutenticacao{

public:

    /// Definições de valores a serem usados como gatilhos para notificações de erros.
    string TRIGGER_APELIDO_SUCESSO;
    string TRIGGER_SENHA_SUCESSO;
    string TRIGGER_ERRO_SISTEMA;
    StubAutenticacao(){
        TRIGGER_ERRO_SISTEMA = "qwert";
        TRIGGER_SENHA_SUCESSO = "asdf";
        TRIGGER_APELIDO_SUCESSO= "admin";
    }

    int verificaLoguin(InterfaceLoguin* user) throw(invalid_argument);

    void alocaUsuario(Usuario user);

};

/**
* Declaração de classe stub da interface ILNGerente.
*/
class StubLNGerente:public ILNGerente{
                                        
public:

    /**
    * Definições de valores a serem usados como gatilhos para notificações de erros e para armazenamento de dados;
    */

    string TRIGGER_FALHA;           ///Variavel destinada a guardar umastring, para que caso o usuario digitar essa string, acarretara em um erro;
    string TRIGGER_ERRO_SISTEMA;    ///Variavel destinada a guardar umastring, para que caso o usuario digitar essa string, acarretara em um erro;
    string TRIGGER_FALHA_APELIDO;   ///Variavel destinada a guardar umastring, para qeu caso o usuario digitar essa string, acarretara em um erro;
    string TRIGGER_ERRO_SISTEMA_APELIDO;    ///Variavel destinada a guardar umastring, para qeu caso o usuario digitar essa string, acarretara em um erro;
    /**
    *Objetos para guardar os dados e simular um banco de dados;
    */

    Usuario usuario;
    Nome nome;
    Telefone telefone;
    Apelido apelido;
    Titulo titulo;
    Data data;
    NomeAutor nomeAutor;
    Codigo codigo;
    Genero genero;
    Livro livro;

    StubLNGerente();  ///Metodo Construtor da classe, ele ira inicializar todas as variaveis para teste;
    Resultado incluir(Livro&) throw(runtime_error);     ///Metodo para incluir um livro;
    Resultado remover(Titulo&) throw(runtime_error);    ///Metodo para Remover um livro;
    ResultadoGerente procurar(Apelido&) throw(runtime_error);   ///Metodo para procurar um usuario;
    ResultadoLivro consultar(Titulo&) throw(runtime_error);     ///Metodo para Consultar os dados de um livro;
    Resultado criar(Resenha&) throw(runtime_error);     ///Metodo para Criar uma resenha sobre um livro;
    ResultadoGerente trocar(Titulo&) throw(runtime_error);     ///Metodo para checar os usuarios que querem trocar;
};

#endif // STUBS_H_INCLUDED
