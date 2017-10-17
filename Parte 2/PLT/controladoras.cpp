#include "controladoras.h"
#include "comandos.h"
#include "stubs.h"

/**
*verifica se o usuario digitou uma senha valida e em seguida tenta envia os dados
*para o stub onde sao verificados*/
void InterfaceLoguin::autenticar(InterfaceLoguin* user) throw(invalid_argument) {
    //InterfaceLoguin user;
    int resultado=0;
    Apelido apelido;
    Senha senha;
    StubAutenticacao stub;

    while(true) {
        try {

            //system("pause");
            //system("CLS");

            cout<<"Login valido     :       admin"<<endl;
            cout<<"Senha valida     :       asdf"<<endl;
            cout<<"Erro de sistema  :       qwert (Apelido)"<<endl<<endl;

            cout <<endl<< "Digite o apelido : " <<endl;
            cin >> apelidoLido;
            apelido.setApelido(apelidoLido);
            cout << "Digite a senha   : " <<endl;
            cin >> senhaLido;
            senha.setSenha(senhaLido);

            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Dado com valor incorreto." << endl;
        }
    }
    try {
        resultado = stub.verificaLoguin(user);
    }
    catch (const invalid_argument &exp) {
        
        cout<<endl<<"---------------"<<endl;
        cout <<"Erro de sistema." << endl;
        cout<<"---------------"<<endl;

    }

    if (resultado < 0){
        cout<<"---------------"<<endl;
        cout<<"Senha invalida."<<endl;
        cout<<"---------------"<<endl;
    }
}

/**metodo resposavel por autenticar o usuario
* e a chamar os metodos responsaveis pela area do usuario**/
void InterfaceLoguin::menuAutentica(InterfaceLoguin* user) throw(invalid_argument){
    while(true){
        // Solicita o serviço de autenticação.
        user->autenticar(user);

        // Critica o resultado da autenticação.
        if(user->autenticado > 0) {
            break;
        }
    }
    cout<<"---------------------"<<endl;
    cout<<"Voce esta autenticado"<<endl;
    cout<<"---------------------"<<endl;
}

/**
*Metodo que mostra a tela inicial*/
int InterfaceLoguin::menuInicial(InterfaceLoguin* user) throw(invalid_argument){
    int opcao=0;
    while(true) {
        //system("pause");
        //system("CLS");

        cout<<"Digite a opcao desejada: "<<endl;
        cout<<"1 - Para efetuar loguin."<<endl;
        cout<<"2 - Para cadastrar"<<endl;
        cout<<"3 - Para encerrar"<<endl;
        cout<<"==";
        cin>>opcao;
        if (opcao == 1){
            user->menuAutentica(user);
            break;
        }else{
            if (opcao==2){
                user->menuCadastro();
            }else{
                return 1;
            }
        }
    }
    return 0;
}



/**Retorna o dado salvo em apelidoLido
*
**/
string InterfaceLoguin::getApelido(){
    return apelidoLido;
}

/**Metodo que seta o valor que define o usuario como autenticado
*
**/
void InterfaceLoguin::setAutenticado(int i){
    autenticado=i;
}



/**Retorna o dado salvo em senhaLido
*
**/
string InterfaceLoguin::getSenha(){
    return senhaLido;
}

/** Metodo resposavel por verificar todos os dados digitas e enviar os dados para o banco de dados**/
void InterfaceLoguin::menuCadastro() throw(invalid_argument){
    string digitado;
    StubAutenticacao stub;
    Usuario user;
    Apelido apelido;
    Nome nome;
    Telefone telefone;
    Senha senha;

    //system("pause");
    //system("CLS");

    cout<<"Nome valido      :       Conter ate 15 caracteres, podendo conter letras, ponto e espaco em branco"<<endl;
    cout<<"Apelido valido   :       Conter ate 5 letras "<<endl;
    cout<<"Telefone valido  :       conter 11 numeros"<<endl;
    cout<<"Senha valida     :       Conter ate 4 letras, sem repeticao"<<endl;
    cout<<"ERRO DE SISTEMA  :       qwert (apelido)"<<endl<<endl;
    
    while(true) {
        try {

            cout<<"Digite o nome desejado"<<endl;
            cin>>digitado;
            nome.setNome(digitado);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Formato invalido." << endl;
        }

    }

    while(true) {
        try {
            cout<<"Digite o apelido desejado"<<endl;
            cin>>digitado;
            apelido.setApelido(digitado);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Formato invalido." << endl;
        }

    }

    while(true) {
        try {
            cout<<"Digite o telefone desejado"<<endl;
            cin>>digitado;
            telefone.setTelefone(digitado);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Formato invalido." << endl;
        }
    }

    while(true) {
        try {
            cout<<"Digite a senha desejado"<<endl;
            cin>>digitado;
            senha.setSenha(digitado);
            break;
        }
        catch (const invalid_argument &exp) {
            cout << endl << "Formato invalido." << endl;
        }

    }
    user.set_Nome(nome);
    user.set_Apelido(apelido);
    user.set_Telefone(telefone);
    user.set_Senha(senha);



    try {
        stub.alocaUsuario(user);
    }
    catch (const invalid_argument &exp) {
        cout <<"Erro no sistema." << endl;
        return ;
    }
    cout<<endl<<"-------------------------------"<<endl;
    cout<<"Usuario cadastrado com sucesso."<<endl;
    cout<<"-------------------------------"<<endl;


}
/// Definições de métodos da classe CntrIUGerente.

void CntrIUGerente::executar(Apelido &apelido) throw(runtime_error){

    ComandoIUGerente *comando;

    int opcao;

    while(true){

        // Ilustra limpeza de tela.

        //system("pause");
        //system("CLS");

        /// Apresentar as opções.

        cout << endl << "Servicos ao Usuario." << endl << endl;

        cout << "Incluir Livro          - " << INCLUIR << endl;
        cout << "Remover Livro          - " << REMOVER << endl;
        cout << "Procurar usuario       - " << PROCURAR << endl;
        cout << "Consultar Livro        - " << CONSULTAR << endl;
        cout << "Criar Resenha          - " << CRIAR << endl;
        cout << "Trocar livro           - " << TROCAR << endl;
        cout << "Retornar               - " << RETORNAR << endl << endl;
        cout << "Selecione uma opcao :"<<  endl;

        cin >> opcao;

        switch(opcao){
            case INCLUIR:   comando = new ComandoIUGerenteIncluir();
                            comando->executar(cntrLNGerente);
                            break;
            case REMOVER:   comando = new ComandoIUGerenteRemover();
                            comando->executar(cntrLNGerente);
                            break;
            case PROCURAR:  comando = new ComandoIUGerenteProcurar();
                            comando->executar(cntrLNGerente);
                            break;
            case CONSULTAR: comando = new ComandoIUGerenteConsultar();
                            comando->executar(cntrLNGerente);
                            break;
            case CRIAR    : comando = new ComandoIUGerenteCriar();
                            comando->executar(cntrLNGerente);
                            break;
            case TROCAR   : comando = new ComandoIUGerenteTrocar();
                            comando->executar(cntrLNGerente);
            break;

        }

        if(opcao == RETORNAR){
            break;
        }

    }

    return;
}

