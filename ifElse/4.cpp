#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario;
    int senha;

    cout << "Usuario: ";
    cin >> usuario;
    cout << "Senha: ";
    cin >> senha;

    if (usuario == "admin" && senha == 123456)
    {
        cout << "Seja bem vindo " << usuario;
    }
    else if (usuario != "admin")
    {
        cout << "Usuario incorreto";
    }
    else if (usuario == "admin" && senha != 123456)
    {
        cout << "Senha incorreta";
    }
    
    return 0;
}