// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

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

    InterfaceLoguin* p = new InterfaceLoguin();
     p->menuInicial(p);

    Apelido apelido;
    apelido.setApelido("diego");
    resultado.setApelido(apelido);
    try{
        // Solicita serviço da controladora de interface gerente.
        cntrIUGerente->executar(apelido);
    }
    catch(const runtime_error &exp){
        cout << "Erro de sistema." << endl;
    }

    return 0;
}
