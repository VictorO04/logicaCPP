#include <iostream>
using namespace std;

int main() {
    double n1;
    double n2;
    double n3;

    cout << "Digite suas 3 notas: \n";
    cin >> n1;
    cin >> n2;
    cin >> n3;

    double media = (n1 + n2 + n3) / 3;

    cout << "Sua media foi " << media << "\n";

    return 0;
}