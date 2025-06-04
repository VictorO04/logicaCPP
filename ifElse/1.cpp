#include <iostream>
using namespace std;

int main() {
    int idade;
    cout << "Quantos anos voce tem? ";
    cin >> idade;

    if (idade >= 16)
    {
        cout << "Pode votar!";
    }
    else
    {
        cout << "Nao tem idade suficiente para poder votar.";
    }
    
    return 0;
}