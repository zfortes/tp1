#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominiosUsuario.h"
#include "dominiosLivro.h"

using namespace std;

/**
* Declaração de classe.
*/

/**
* Esta classe e onde armazenamos os dados referentes ao usuario. Ela possui metodos para set e get destes dados.
*/
class Usuario {

private:

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

	Titulo titulo;
	Data data;
	Codigo codigo;
	Genero genero;

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
