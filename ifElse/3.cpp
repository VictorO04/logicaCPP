#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "o numero " << num << " e par!";
    }
    else
    {
        cout << "o numero " << num << " e impar!";
    }

    return 0;
}