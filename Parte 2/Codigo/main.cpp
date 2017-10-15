#include <iostream>
#include <cstdlib>
#include "dominiosUsuario.h"	
#include "dominiosLivro.h"
#include "entidades.h"
#include <string>
using namespace std;
/**
*A main faz todas as chamadas de testes dos dominios e mostra na tela.
*/
int main (){

	Nome nome;
	string aux;
	Usuario * usuario= new Usuario(); 
	cout << "Digite teu nome "<< endl;
	cin>>aux;
	nome.setNome(aux);
	usuario->set_Nome(nome);
 
	cout<<"Seu nome " <<usuario->get_Nome() << endl; 

    
    return 0;
}
