#include <iostream>
using namespace std;

int main() {
    float Num1;
    float Num2;

    cout << "Digite o primeiro numero: ";
    cin >> Num1;
    cout << "Digite o segundo numero: ";
    cin >> Num2;

    cout << "" << endl;
    cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
    cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
    cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
    cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;

    return 0;
}