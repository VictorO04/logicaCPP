#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    cout << "Digite seu nome: ";
    getline(cin, nome);
    cout << "Ola " << nome << "!\n";

    return 0;
}