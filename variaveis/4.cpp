#include <iostream>
using namespace std;

int main() {
    int Num1 = 10;
    int Num2 = 20;
    int temp;

    cout << "Os numeros sao " << Num1 << " e " << Num2 << "\n";

    temp = Num1;
    Num1 = Num2;
    Num2 = temp;

    cout << "Agora sao " << Num1 << " e " << Num2 << "\n";
    
    return 0;
}