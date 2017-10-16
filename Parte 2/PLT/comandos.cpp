#include "comandos.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include "entidades.h"
#include "dominios.h"

using namespace std;
// Método por meio do qual é solicitada a execução do comando.

void ComandoIUGerenteIncluir::executar(ILNGerente* cntrLNGerente) throw(runtime_error){

    Resultado resultado;
    string valor;
    Livro livro;
    Titulo titulo;
    Data data;
    Codigo codigo;
    Genero genero;
    NomeAutor nomeAutor;

    // Código de interação com o usuário.
    cin.ignore(256, '\n');
    while(true){
        try{
            system ("clear");

            cout<<endl<<endl<<"                               INCLUIR LIVRO                     "<<endl<<endl;
            cout<<"Titulo valido        :       Conter ate 20 caracteres e nao conter espacos em branco duplicados" << endl;
            cout<<"Data valida          :       Conter 6 numeros, sem barra, no formato DD/MM/AA"<< endl;
            cout<<"Codigo valido        :       Conter 5 numeros"<< endl;
            cout<<"Genero valido        :       EPOPEIA, NOVELA, CONTO, ENSAIO OU ROMANCE"<< endl;
            cout<<"Nome Autor valido    :       Conter ate 15 caracteres, contendo letra, ponto ou espaco em branco" << endl;
            cout<<endl<<"Simular erro   :       Escrever um dos exemplos abaixo no titulo ou escrever algum dado em formato errado" <<endl<<endl; 
            cout<<"Erro de Falha titulo(Livro ja existente na estante)     :       A lagoa azul"<< endl;
            cout<<"Erro de sistema                                         :       O panda preto"<< endl << endl;


            cout << "Digite o Titulo: "<<endl;
            getline(cin, valor);
            titulo.setTitulo(valor);

            system("pause");

            cout << "Digite a Data: "<<endl;
            getline(cin, valor);
            data.setData(valor);

            system("pause");

            cout << "Digite o Codigo: "<<endl;
            getline(cin, valor);
            codigo.setCodigo(valor);

            system("pause");

            cout << "Digite o Genero: "<<endl;
            getline(cin, valor);
            genero.setGenero(valor);

            system("pause");

            cout << "Digite o Nome do Autor: "<<endl <<endl;
            getline(cin, valor);
            nomeAutor.setNome(valor);

            system("pause");

            livro.set_Titulo(titulo);
            livro.set_Data(data);
            livro.set_Codigo(codigo);
            livro.set_Genero(genero);
            livro.set_NomeAutor(nomeAutor);
            break;
        }
        catch(invalid_argument &exp){
            cout << "formato incorreto" << endl;
        }
    }

    // Solicitar serviço.
    try{
        resultado = cntrLNGerente->incluir(livro);
        if(resultado.getValor() == Resultado::SUCESSO){
             cout <<"Sucesso na execucao da operacao" << endl<<endl <<"livro Incluido: "<<endl;
             cout <<"Titulo     :   "<<livro.get_Titulo()<<endl;
             cout <<"Data       :   "<<livro.get_Data()<<endl;
             cout <<"Codigo     :   "<<livro.get_Codigo()<<endl;
             cout <<"Genero     :   "<<livro.get_Genero()<<endl;
             cout <<"Nome Autor :   "<<livro.get_NomeAutor()<<endl;

        } 
        else {
            cout << "Livro ja incluido na estante" << endl;
        }
    }
    catch(runtime_error &exp){
        cout<<"Erro de sistema"<<endl;
    }
}

// Método por meio do qual é solicitada a execução do comando.

void ComandoIUGerenteRemover::executar(ILNGerente* cntrLNGerente) throw(runtime_error){

    Resultado resultado;
    Titulo titulo;
    string valor;

    // Código de interação com o usuário.
    cin.ignore(256, '\n');
    while(true){
        try{
            cout<<endl<<endl<<"                             REMOVER LIVRO                   "<<endl<<endl;
            cout<<"Livro existente      :       O ceu preto" << endl;
            cout<<endl<<"Simular erro   :       Escrever um dos exemplos abaixo no titulo ou escrever algum dado em formato errado" <<endl<<endl; 
            cout<<"Erro de Falha titulo(Livro ja existente na estante)     :       A lagoa azul"<< endl;
            cout<<"Erro de sistema                                         :       O panda preto"<< endl << endl;
            cout << "Digite o titulo:  "<<endl;
            getline(cin, valor);
            titulo.setTitulo(valor);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Titulo com formato incorreto" << endl;
        }
    }

    // Solicitar serviço.

    resultado = cntrLNGerente->remover(titulo);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao, Livro removido com sucesso" << endl <<endl;
    }
    else {
        cout << "Falha na execucao da operacao, Livro não existente na estante" << endl <<endl;
    }

}

// Método por meio do qual é solicitada a execução do comando.

void ComandoIUGerenteProcurar::executar(ILNGerente* cntrLNGerente)throw(runtime_error){

    ResultadoGerente resultado;

    Apelido apelido;
    string valor;
    Usuario usuario;
    cin.ignore(256, '\n');

    /**
    * Código de interação com o usuário.
    */
    while(true){
        try{
            cout<<endl<<endl<<"                               PROCURAR USUARIO                      "<<endl<<endl;
            cout<<"Usuario Cadastrado   :       diego" << endl;
            cout<<endl<<"Simular erro   :       Escrever um dos exemplos abaixo no titulo ou escrever algum dado em formato errado" <<endl<<endl; 
            
            cout<<"Trigger de Falha     :      biel "<< endl;
            cout<<"Erro de sistema      :      joel "<< endl << endl;
            cout << "Digite o Apelido:  "<<endl;
            getline(cin, valor);
            apelido.setApelido(valor);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Apelido com formato incorreto" << endl;
        }
    }

    // Solicitar serviço.


    resultado = cntrLNGerente->procurar(apelido);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" <<endl << endl <<"Informacoes do Usuario: "<<endl <<endl ;
         usuario = resultado.getUsuario();
         cout<<"Nome    :   "<<usuario.get_Nome() <<endl;
         cout<<"Apelido :   "<<usuario.get_Apelido() <<endl;
         cout<<"Telefone:   "<<usuario.get_Telefone() <<endl;
    }
    else {
        cout << "Falha na execucao da operacao, Usuario nao encontrado" << endl <<endl;
    }

}

// Método por meio do qual é solicitada a execução do comando.

void ComandoIUGerenteConsultar::executar(ILNGerente* cntrLNGerente)throw(runtime_error){

    ResultadoLivro resultado;
    Livro livro;
    string valor;
    Titulo titulo;
    cin.ignore(256, '\n');

    /**
    * Código de interação com o usuário.
    */
    while(true){
        try{
            cout<<endl<<endl<<"                              CONSULTAR LIVRO                   "<<endl<<endl;
            cout<<"Livro existente      :       O ceu preto" << endl;
            cout<<endl<<"Simular erro   :       Escrever um dos exemplos abaixo no titulo ou escrever algum dado em formato errado" <<endl<<endl; 
            
            cout<<"Trigger de Falha     :       A lagoa azul  "<< endl;
            cout<<"Erro de sistema      :       O panda preto "<< endl << endl;
            cout << "Digite o Titulo:  "<<endl;
            getline(cin, valor);
            titulo.setTitulo(valor);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Apelido com formato incorreto" << endl <<endl;
        }
    }


    resultado=cntrLNGerente->consultar(titulo);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" <<endl << endl <<"Informacoes do Livro: "<<endl <<endl ;
         livro = resultado.getLivro();
         cout<<"Titulo    :   "<<livro.get_Titulo() <<endl;
         cout<<"Data      :   "<<livro.get_Data() <<endl;
         cout<<"Codigo    :   "<<livro.get_Codigo() <<endl;
         cout<<"Genero    :   "<<livro.get_Genero() <<endl;
         cout<<"Nome Autor:   "<<livro.get_NomeAutor() <<endl;
    }
    else {
        cout << "Falha na execucao da operacao, livro nao encontrado" << endl <<endl;
    }

}
void ComandoIUGerenteCriar::executar(ILNGerente* cntrLNGerente)throw(runtime_error){

    Resultado resultado;
    Resenha resenha;
    string valor;
    Texto texto;
    Nome nome;
    Titulo titulo;
    cin.ignore(256, '\n');

    /**
    * Código de interação com o usuário.
    */
    while(true){
        try{
            cout<<endl<<endl<<"                              CRIAR RESENHA                    "<<endl<<endl;
            cout<<"Livro existente      :       O ceu preto" << endl;
            cout<<"Nome Valido          :       Conter ate 15 letras, podendo conter tambem ponto e espaco em branco" <<endl;
            cout<<endl<<"Simular erro   :       Escrever um dos exemplos abaixo no titulo ou escrever algum dado em formato errado" <<endl<<endl; 
            
            cout<<"Trigger de Falha     :       A lagoa azul  "<< endl;
            cout<<"Erro de sistema      :       O panda preto "<< endl << endl;

            cout<<"Digite o titulo      :       "<< endl;
            getline(cin, valor);
            titulo.setTitulo(valor);

            cout<<"Digite seu nome      :       "<< endl;
            getline(cin, valor);
            nome.setNome(valor);

            cout << "Digite a  resenha  :       (MAX 40 caracteres)  "<<endl <<endl;
            getline(cin, valor);
            texto.setTexto(valor);

            resenha.set_Texto(texto);
            resenha.set_Nome(nome);
            resenha.set_Titulo(titulo);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Apelido com formato incorreto" << endl <<endl;
        }
    }


    resultado=cntrLNGerente->criar(resenha);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" <<endl << endl <<"Informacoes do Livro: "<<endl <<endl ;
    }
    else {
        cout << "Falha na execucao da operacao, livro nao encontrado" << endl <<endl;
    }

}
