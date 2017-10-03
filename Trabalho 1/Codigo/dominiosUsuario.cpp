#include "dominiosUsuario.h"
#include <string>

/**
* Definições de métodos.
*/

/**
*Este metodo valida o nome do usuario. Ele verifica se tem algum caracter nao permitido na string.
*/
void Nome::validarNome(string nome) throw (invalid_argument){

	int tamanhoNome=nome.size(), contador=0, ASCII;

	if(tamanhoNome>tamanhoMAX_nome){
		throw invalid_argument("Argumento invalido.");
	}

	while(contador!=tamanhoNome){

		/**
		*A variavel ASCII armazena o valor ascii do char que esta naquela posicao.
        */
		ASCII=(int)nome[contador];

		/**
		*Ele verifica a se o caracter que esta dentro daquela string, esta dentro dos caracteres aceitaveis, comparando por meio do valor ascii de cada um.
        */
		if (((ASCII<ascii_A)||(ASCII>ascii_Z))&&((ASCII<ascii_a)||(ASCII>ascii_z)) && (ASCII!='.') && (nome[contador]!=' ')){
	        throw invalid_argument("Argumento invalido.");
		}
		contador++;
	}
}
/**
*Este metodo e responsavel por validar a senha. Ele verifica se possui algum caracter repetido na senha.
*/
void Senha::validarSenha(string senha) throw (invalid_argument){

	int tamanhoSenha=senha.size(), contadorUm=0, contadorDois=0;

	if(tamanhoSenha>tamanhoMAX_senha){
		throw invalid_argument("Argumento invalido");
	}
	while(contadorUm!=tamanhoSenha-1){
        /**
        *contadorDois é a proxima posicao do vetor.
		*/
		for(contadorDois=contadorUm+1; contadorDois!=tamanhoSenha; contadorDois++){
			if(senha[contadorUm]==senha[contadorDois]){
				throw invalid_argument("Argumento invalido.");
			}
		}
		contadorUm++;
	}
}
/**
*Este metodo e responsavel por validar o apelido. Nele e verificado se o apelido possui algum caracter nao permitido.
*/
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
/**
*Este metodo e responsavel por validar o telefone. Nele e chacado se o telefone so possui algorismos.
*/
void Telefone::validarTelefone(string telefone) throw (invalid_argument){

	int tamanhoTelefone=telefone.size(), contadorUm=0, ASCII=0;

	if(tamanhoTelefone!=tamanhoMAX_telefone){
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
/**
*Este metodo armazena o dado na classe nome.
*/
void Nome::setNome(string nome) throw (invalid_argument){
    validarNome(nome);
    this->nome = nome;
}
/**
*Este metodo armazena o dado na classe Senha.
*/
void Senha::setSenha(string senha) throw (invalid_argument){
    validarSenha(senha);
    this->senha = senha;
}
/**
*Este metodo armazena o dado na classe Apelido.
*/
void Apelido::setApelido(string apelido) throw (invalid_argument){
    validarApelido(apelido);
    this->apelido = apelido;
}
/**
*Este metodo armazena o dado na classe Telefone.
*/
void Telefone::setTelefone(string telefone) throw (invalid_argument){
    validarTelefone(telefone);
    this->telefone = telefone;
}
