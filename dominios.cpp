#include "dominios.h"
#include <string>

//Definições de constantes.

// Definições de métodos.

void Nome::validarNome(string nome) throw (invalid_argument){

	int tamanhoNome=nome.size(), contador=0, ASCII;

	if(tamanhoNome>tamanhoMAX_nome){
		throw invalid_argument("Argumento invalido.");
	}

	while(contador!=tamanhoNome){

		//A variavel ASCII armazena o valor ascii do char que esta naquela posicao.
		
		ASCII=(int)nome[contador];

		//Ele verifica a se o caracter que esta dentro daquela string, esta dentro dos caracteres aceitaveis, comparando por meio do valor ascii de cada um.
		
		if (((ASCII<ascii_A)||(ASCII>ascii_Z))&&((ASCII<ascii_a)||(ASCII>ascii_z)) && (ASCII!='.') && (nome[contador]!=' ')){
	        throw invalid_argument("Argumento invalido.");
		}
		contador++;
	}
}
void Senha::validarSenha(string senha) throw (invalid_argument){

	int tamanhoSenha=senha.size(), contadorUm=0, contadorDois=0;

	if(tamanhoSenha>tamanhoMAX_senha){
		throw invalid_argument("Argumento invalido");
	}
	while(contadorUm!=tamanhoSenha-1){
		for(contadorDois=contadorUm+1; contadorDois!=tamanhoSenha; contadorDois++){
			if(senha[contadorUm]==senha[contadorDois]){
				throw invalid_argument("Argumento invalido.");
			}
		}
		contadorUm++;
	}
}
void Apelido::validarApelido(string apelido) throw (invalid_argument){

	int tamanhoApelido=apelido.size(), contadorUm=0, ASCII=0;
	if(tamanhoApelido>tamanhoMAX_apelido){
		throw invalid_argument("Argumento invalido");
	}
	while(contadorUm!=tamanhoApelido){
		ASCII=(int) apelido[contadorUm];
		if(((ASCII<ascii_A)||(ASCII>ascii_Z))&&((ASCII<ascii_a)||(ASCII>ascii_z))){
			throw invalid_argument("Argumento invalido.");
		}
		contadorUm++;
	}
}

void Telefone::validarTelefone(string telefone) throw (invalid_argument){

	int tamanhoTelefone=telefone.size(), contadorUm=0, ASCII=0;
	
	if(tamanhoTelefone!=tamanho_telefone){
		throw invalid_argument("Argumento invalido");
	}
	while(contadorUm!=tamanhoTelefone){
		ASCII=(int) telefone[contadorUm];
		if((ASCII<ascii_0)||(ASCII>ascii_9)){
			throw invalid_argument("Argumento invalido.");
		}
		contadorUm++;
	}
}

void Nome::setNome(string nome) throw (invalid_argument){
    validarNome(nome);
    this->nome = nome;
}

void Senha::setSenha(string senha) throw (invalid_argument){
    validarSenha(senha);
    this->senha = senha;
}

void Apelido::setApelido(string apelido) throw (invalid_argument){
    validarApelido(apelido);
    this->apelido = apelido;
}

void Telefone::setTelefone(string telefone) throw (invalid_argument){
    validarTelefone(telefone);
    this->telefone = telefone;
}