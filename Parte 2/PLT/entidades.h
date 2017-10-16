#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

/**
* Esta classe e onde armazenamos os dados referentes ao usuario. Ela possui metodos para set e get destes dados.
*/
class Usuario {

private:

    /**
    *   Objetos que essa classe armazena;
    */
    
    Nome nome;
    Senha senha;
    Telefone telefone;
    Apelido apelido;

public:

    /**
    * Metodo para setar o nome
    */
    void set_Nome(const Nome &nome){
        this->nome = nome;
    }
    /**
    * Metodo para setar a senha
    */
    void set_Senha(Senha &senha){
        this->senha = senha;
    }
    /**
    * Metodo para setar o telefone
    */
    void set_Telefone(Telefone &telefone) {
        this->telefone = telefone;
    }
    /**
    * Metodo para setar o apelido.
    */
    void set_Apelido(Apelido &apelido){
        this->apelido= apelido;
    }
    /**
    * Metodo para obter o nome.
    */
    string get_Nome(){
        return nome.getNome(); 
    }
    /**
    * Metodo para obter a senha.
    */

    string get_Senha() {
        return senha.getSenha();
    }
    /**
    * Metodo para obter o telefone.
    */
    string get_Telefone() {
        return telefone.getTelefone();
    }
    /**
    * metodo para obter o apelido.
    */
    string get_Apelido() {
        return apelido.getApelido();
    }
};

/**
* Esta classe e onde armazenamos os dados referentes ao livro. Ela possui metodos para set e get destes dados.
*/

class Livro{
private:

    /**
    *   Objetos que essa classe armazena;
    */

    Titulo titulo;
    Data data;
    Codigo codigo;
    Genero genero;
    NomeAutor nomeAutor;

public:

    /**
    * Metodo para setar o Titulo.
    */
    void set_Titulo(Titulo &titulo){
        this->titulo= titulo;
    }
    /**
    * Metodo para setar a data.
    */
    void set_Data(Data &data){
        this->data = data;
    }
    /**
    * Metodo para setar o Codigo.
    */
    void set_Codigo(Codigo &codigo) {
        this->codigo = codigo;
    }
    /**
    * Metodo para setar o Genero.
    */
    void set_Genero(Genero &genero){
        this->genero= genero;
    }

    /**
    * Metodo para setar o Genero.
    */
    void set_NomeAutor(NomeAutor &nomeAutor){
        this->nomeAutor= nomeAutor;
    }
    /**
    * Metodo para obter o titulo.
    */
    string get_Titulo() {
        return titulo.getTitulo();
    }
    /**
    * Metodo para obter a data.
    */
    string get_Data() {
        return data.getData();
    }
    /**
    * Metodo para obter o codigo.
    */
    string get_Codigo() {
        return codigo.getCodigo();
    }
    /**
    * Metodo para obter o genero.
    */
    string get_Genero() {
        return genero.getGenero();
    }
    /**
    * Metodo para obter o genero.
    */
    string get_NomeAutor() {
        return nomeAutor.getNome();
    }
};

/**
*Declaracoes de classes que representam resultados. 
*Esta classe é responsavel por armazenar os resultados de cada operacao. No caso de sucesso ou de falha;
*/

class Resultado {

protected:

    int valor;  ///Variavel que contera o resultado da operação;

public:

    /**
    *   Valores constantes para evitar os numeros magicos;
    */
    const static int SUCESSO = 0;
    const static int FALHA   = 1;


    void setValor(int valor){ ///Metodo para atribuir o valor para a variavel da classe;
        this->valor = valor;
    }

    int getValor() const {  ///Metodo para adquirir o valor da variavel da classe;
        return valor;
    }
};

class ResultadoAutenticacao:public Resultado {

private:
    Apelido apelido;

public:
    void setApelido(const Apelido &apelido){      // passagem por referência.
        this->apelido = apelido;
    }

    Apelido getApelido() const {
        return apelido;
    }
};

/**
*Esta class armazena os dados de um usuario quando ele e cadastro no sistema e pesquizado;
*/
class ResultadoGerente:public Resultado {

private:
    Usuario usuario; ///Objeto responsavel por armazenar dados do usuario;

public:


    void setUsuario(Usuario &usuario){ ///Metodo responsavel por atribuir um valor, do tipo usuario, para o objeto;
        this->usuario = usuario;
    }

    Usuario getUsuario() const {    ///Metodo responsavel por pegar o valor do objeto;
        return usuario;
    }
};

/**
*Esta classe armazena os dados de um usuario quando ele e cadastro no sistema e pesquizado;
*/
class ResultadoLivro:public Resultado {

private:
    Livro livro;  ///Objeto responsavel por armazenar dados do usuario;

public:
    void setLivro(Livro &livro){    ///Metodo responsavel por atribuir um valor, do tipo usuario, para o objeto;
        this->livro = livro;
    }

    Livro getLivro() const {        ///Metodo responsavel por pegar o valor do objeto;
        return livro;
    }
};

/**
* Esta classe e onde armazenamos os dados referentes ao livro. Ela possui metodos para set e get destes dados.
*/
class Resenha{
private:

    Nome nome;
    Titulo titulo;
    Texto texto;

public:
    /**
    * Metodo para setar o nome.
    */
    void set_Nome(Nome &nome){
        this->nome = nome;
    }
    /**
    * Metodo para setar o Titulo.
    */
    void set_Titulo(Titulo &titulo){
        this->titulo = titulo;
    }
    /**
    * Metodo para setar o Texto.
    */
    void set_Texto(Texto &texto){
        this->texto = texto;
    }
    /**
    * Metodo para Obter o nome.
    */
    string get_Nome(){
        return nome.getNome();
    }
    /**
    * Metodo para Obter o Titulo .
    */
    string get_Titulo(){
        return titulo.getTitulo();
    }
    /**
    * Metodo para Obter o texto.
    */
    string get_Texto(){
        return texto.getTexto();
    }
};




#endif // ENTIDADES_H_INCLUDED
