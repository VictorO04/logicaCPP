#include <iostream>
using namespace std;

int main() {
    double Num1;
    double Num2;

    cout << "Digite o primeiro numero: ";
    cin >> Num1;
    cout << "Digite o segundo numero: ";
    cin >> Num2;

    cout << "\n";
    cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
    cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
    cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
    cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;

    return 0;
}