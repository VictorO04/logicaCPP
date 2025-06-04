#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;

    if (numero > 0)
    {
        cout << "O numero e positivo.";
    }
    else if (numero < 0)
    {
        cout << "O numero e negativo.";
    }
    else
    {
        cout << "O numero e 0.";
    }  
}