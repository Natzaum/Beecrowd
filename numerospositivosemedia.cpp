#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(1);

    double valor, soma = 0;
    int A = 0, positivos = 0;

    while (A < 6) {
        cin >> valor;
        if (valor > 0) {
            positivos++;
            soma += valor;
        }
        A++;
    }

    cout << positivos << " valores positivos" << endl;

    if (positivos > 0) {
        cout << soma / positivos << endl;
    }

    return 0;
}