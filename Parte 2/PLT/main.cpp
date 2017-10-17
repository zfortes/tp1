#include <stdexcept>
#include <iostream>
#include <string>

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"

using namespace std;

int main()
{
    /// Declara e instancia as controladoras.
    IUGerente       *cntrIUGerente;
    cntrIUGerente = new CntrIUGerente();

    /// Declara e instancia os stubs.
    ILNGerente      *stubLNGerente;
    stubLNGerente = new StubLNGerente();

    cntrIUGerente->setCntrLNGerente(stubLNGerente);

    ResultadoAutenticacao resultado;
    while(true){
        int decisao;
        InterfaceLoguin* p = new InterfaceLoguin();
        decisao=p->menuInicial(p);
        if(decisao==1){
            break;
        }
        Apelido apelido;
        apelido.setApelido("diego");
        resultado.setApelido(apelido);
        
        /// Solicita serviço da controladora de interface gerente.
        cntrIUGerente->executar(apelido);

        //system("pause");
        //system("CLS");
        cout<<"Deseja continuar?"<<endl<<"(1) continuar"<<endl<<"(2) terminar"<<endl;
        cin>>decisao;
        if(decisao==2){
            break;
        }
    }

    return 0;
}
