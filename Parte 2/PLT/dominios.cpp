#include "dominios.h"
#include <string>
#include <cstdlib>

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

/**
* Definições de métodos.
*/

/**
*Este metodo e responsavel por validar o titulo do livro, nela e verificado se existe espacoes duplo no titulo.
*/
void Titulo::validarTitulo(string titulo) throw (invalid_argument){

	int tamanhoTitulo=titulo.size(), contadorUm=0;
	int tamnahoMAX_titulo=20;
	if(tamanhoTitulo>tamnahoMAX_titulo){
		throw invalid_argument("Argumento invalido");
	}
	while(contadorUm!=tamanhoTitulo-1){
		if(titulo[contadorUm]==' '){
			if(titulo[contadorUm+1]==' '){
				throw invalid_argument("Argumento invalido.");
			}
		}
		contadorUm++;
	}
}
/**
*Este metodo e responsavel por validadar a data do livro, nela e verificado se os dias, os meses e os anos estao dentro dos paramentros.
*/
void Data::validarData(string data) throw (invalid_argument){

	int tamanhoData=data.size(), contadorUm=0, contadorDois, numeroString=0;
	char numero[2];
	if((tamanhoData>tamanhoMAX_data)||(tamanhoData!=tamanhoMAX_data)){
		throw invalid_argument("Argumento invalido");
	}
	while(contadorUm<tamanhoData){

		contadorDois=0;

		for(contadorDois=0; contadorDois!=2; contadorDois++){
			numero[contadorDois]=data[contadorUm];
			contadorUm++;
		}
		if((contadorUm!=tamanhoData)&&(data[contadorUm]!= '/')){
			throw invalid_argument ("Argumento invalido");
		}
		contadorUm++;
		numeroString=atoi(numero);

		switch(contadorUm){
			case 3:
				if((numeroString>DIAS)||(numeroString==0)){
					throw invalid_argument("Argumento invalido");
				}
				break;

			case 6:
				if((numeroString>MESES)||(numeroString==0)){
					throw invalid_argument("Argumento invalido");
				}
				break;

			case 8:
				if((numeroString>ANOS)||(numeroString<0)){
					throw invalid_argument("Argumento invalido");
				}
		}
	}
}
/**
*Este metodo e responsavel por validar o codigo do livro, nela e verificado se codigo tem o tamanho certo e se somente possui algorismos.
*/
void Codigo::validarCodigo(string codigo) throw (invalid_argument){

	int tamanhoCodigo=codigo.size(), contadorUm=0, ASCII;

	if((tamanhoCodigo>tamanhoMAX_codigo)||(tamanhoCodigo!=tamanhoMAX_codigo)){
		throw invalid_argument("Argumento invalido");
	}
	while(tamanhoCodigo!=contadorUm){
		ASCII=(int) codigo[contadorUm];
		if((ASCII<ascii_0)||(ASCII>ascii_9)){
			throw invalid_argument("Argumento invalido");
		}
		contadorUm++;
	}
}
/**
*Este metodo valida o texto. Ela checa se o texto informado e maior que o permitido.
*/
void Texto::validarTexto(string texto) throw (invalid_argument){

	int tamanhoTexto=texto.size();
	if(tamanhoTexto>40){
		throw invalid_argument("Argumento invalido");
	}
}
/**
*Este metodo e responsavel por validar o genero informado pelo usuario.
*/
void Genero::validarGenero(string genero) throw (invalid_argument){

	if((genero=="NOVELA")||(genero=="novela")){
		return;
	}
	else{
		if((genero=="CONTO")||(genero=="conto")){
			return;
		}
		else{
			if((genero=="EPOPEIA")||(genero=="epopeia")){
				return;
			}
			else{
				if((genero=="ENSAIO")||(genero=="ensaio")){
					return;
				}
				else{
					if((genero=="ROMANCE")||(genero=="romance")){
						return;
					}
				}
			}
		}
	}
	throw invalid_argument("Argumento invalido");
}

/**
*Este metodo armazena o dado na classe Data.
*/
void Data::setData(string data) throw (invalid_argument){
    validarData(data);
    this->data = data;
}
/**
*Este metodo o dado na classe Texto.
*/
void Texto::setTexto(string texto) throw (invalid_argument){
    validarTexto(texto);
    this->texto = texto;
}
/**
*Este metodo armazena o dado na classe Codigo.
*/
void Codigo::setCodigo(string codigo) throw (invalid_argument){
    validarCodigo(codigo);
    this->codigo = codigo;
}
/**
*Este metodo armazena o dado na classe Titulo.
*/
void Titulo::setTitulo(string titulo) throw (invalid_argument){
    validarTitulo(titulo);
    this->titulo = titulo;
}
/**
*Este metodo armazena o dado na classe Genero.
*/
void Genero::setGenero(string genero) throw (invalid_argument){
    validarGenero(genero);
    this->genero = genero;
}
