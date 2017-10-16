#include "stubs.h"
#include "dominios.h"
#include "entidades.h"


/**Stub responsavel por simular a autenticacao de um usuario dando 3 tipode de erros diferentes**/
int StubAutenticacao::verificaLoguin(InterfaceLoguin*  user) throw(invalid_argument){
    StubAutenticacao stub;

    if ((user->getApelido() == stub.TRIGGER_APELIDO_SUCESSO) && (user->getSenha() == stub.TRIGGER_SENHA_SUCESSO)){
        user->setAutenticado(5);
    }else{
        if (user->getApelido() == stub.TRIGGER_ERRO_SISTEMA){
            throw invalid_argument("Erro.");
        }else{
            return -2;
        }
    }
    return 0;
}

/**Stub responsavel por simular a alocacao de um novo usuario no banco de dado**/
void StubAutenticacao::alocaUsuario(Usuario user){
    StubAutenticacao stub;
    Apelido apelido;
    apelido.setApelido(user.get_Apelido());
    if (apelido.getApelido() == stub.TRIGGER_ERRO_SISTEMA){
        throw invalid_argument("Erro.");
    }
}



StubLNGerente::StubLNGerente(){
        /**
        * Constantes para usar no metodo incluir
        */
        TRIGGER_FALHA= "A lagoa azul";
        TRIGGER_ERRO_SISTEMA= "O panda preto";
        /**
        * Constantes para usar no metodo procurar usuario 
        */
        TRIGGER_FALHA_APELIDO= "biel";         
        TRIGGER_ERRO_SISTEMA_APELIDO= "joel";
        nome.setNome("Diego Vaz");
        telefone.setTelefone("61984144905");
        apelido.setApelido("diego");
        usuario.set_Apelido(apelido);
        usuario.set_Nome(nome);
        usuario.set_Telefone(telefone);
        /**
        * Constantes para usar no metodo de remover 
        */
        titulo.setTitulo("O ceu preto");
        /**
        * Constantes para usar no metodo consultar livro
        */
        cout<<"entrou"<<endl;
        data.setData("12/12/12");
        nomeAutor.setNome("joao tavares");
        codigo.setCodigo("12345");
        genero.setGenero("epopeia");
        livro.set_Titulo(titulo);
        livro.set_Data(data);
        livro.set_Codigo(codigo);
        livro.set_NomeAutor(nomeAutor);
        livro.set_Genero(genero);
}
Resultado StubLNGerente::incluir(Livro &livro) throw(runtime_error){

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerente::incluir" << endl ;

    Resultado resultado;
    string titulo;
    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.

    titulo=livro.get_Titulo();


    if(titulo==TRIGGER_FALHA){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    else{
        if(titulo==TRIGGER_ERRO_SISTEMA){
             throw runtime_error("Erro de sistema");
        }
        else{
            resultado.setValor(ResultadoAutenticacao::SUCESSO);
        }
    }


    return resultado;
}

Resultado StubLNGerente::remover(Titulo &titulo1) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerente::remover" << endl ;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.

    if(titulo1.getTitulo()==TRIGGER_FALHA){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    else{
        if(titulo1.getTitulo()==TRIGGER_ERRO_SISTEMA){
            throw runtime_error("Erro de sistema");
        }
        else{
            if(titulo1.getTitulo()==titulo.getTitulo()){
                resultado.setValor(ResultadoAutenticacao::SUCESSO);
            }
            else{
                resultado.setValor(ResultadoAutenticacao::FALHA);
            }

        }
    }

    return resultado;
}

ResultadoGerente StubLNGerente::procurar(Apelido &apelido) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerente::procurar" << endl ;

    ResultadoGerente resultado;

    resultado.setValor(Resultado::SUCESSO);

    if(apelido.getApelido()==TRIGGER_FALHA_APELIDO){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    else{
        if(apelido.getApelido()==TRIGGER_ERRO_SISTEMA_APELIDO){
            throw runtime_error("Erro de sistema");
        }
        else{
            if(apelido.getApelido()==usuario.get_Apelido()){
                resultado.setValor(ResultadoAutenticacao::SUCESSO);
                resultado.setUsuario(usuario);
            }
            else{
                resultado.setValor(ResultadoAutenticacao::FALHA);
           }
        }
    }

    return resultado;
}

ResultadoLivro StubLNGerente::consultar(Titulo &titulo) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerente::consultar" << endl ;

    ResultadoLivro resultado;

    resultado.setValor(Resultado::SUCESSO);

    if(titulo.getTitulo()==TRIGGER_FALHA){
            resultado.setValor(ResultadoAutenticacao::FALHA);
        }
        else{
            if(titulo.getTitulo()==TRIGGER_ERRO_SISTEMA){
                throw runtime_error("Erro de sistema");
            }
            else{
                if(titulo.getTitulo()==livro.get_Titulo()){
                    resultado.setValor(ResultadoAutenticacao::SUCESSO);
                    resultado.setLivro(livro);
                }
                else{
                    resultado.setValor(ResultadoAutenticacao::FALHA);
               }
            }
        }

    return resultado;
}

Resultado StubLNGerente::criar(Resenha &resenha) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubLNGerente::criar" << endl ;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    if(resenha.get_Titulo()==TRIGGER_FALHA){
            resultado.setValor(ResultadoAutenticacao::FALHA);
        }
        else{
            if(resenha.get_Titulo()==TRIGGER_ERRO_SISTEMA){
                throw runtime_error("Erro de sistema");
            }
            else{
                if(resenha.get_Titulo()==livro.get_Titulo()){
                    resultado.setValor(ResultadoAutenticacao::SUCESSO);
                }
                else{
                    resultado.setValor(ResultadoAutenticacao::FALHA);
               }
            }
        }

    return resultado;
}
