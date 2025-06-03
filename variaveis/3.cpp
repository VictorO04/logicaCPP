#include <iostream>
using namespace std;

int main() {
    double c;
    
    cout << "Digite a temperatura em graus celsius: ";
    cin >> c;
    cout << c << " graus celsius e igual a " << (c * 1.8) + 32 << " graus Fahrenheit" << endl;

    return 0;
}