#include <iostream>
using namespace std;

int main() {
    double nota;

    cout << "Digite sua nota: ";
    cin >> nota;

    if (nota >= 90 && nota <= 100)
    {
        cout << "Excelente! Parabens!";
    }
    else if (nota >= 70 && nota < 90)
    {
        cout << "Bom trabalho!";
    }
    else if (nota >= 50 && nota < 70)
    {
        cout << "Regular. Precisa melhorar.";
    }
    else if (nota >= 0 && nota < 50)
    {
        cout << "Insuficiente. Estude mais!";
    }
    else
    {
        cout << "Valor invalido";
    }
    
    return 0;
}