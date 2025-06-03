//Coloca a biblioteca que permite usar cout e cin
#include <iostream>
//Facilida o uso do cout e cin, faz com que não precise ficar escrevendo std::
using namespace std;

//Cria a função main
int main() {
    //Cria uma variavel nome como string
    string nome;
    //Mostra mensagem no terminal
    cout << "Digite seu nome: ";
    //Atribui o valor que será digitado console para a variável nome. OBS: o getline deixar escrever varias palavras no terminal
    getline(cin, nome);
    //Exibe saudação
    cout << "Ola " << nome << "!" << endl;

    //Retorna que o programa foi executado com sucesso
    return 0;
}