#include <iostream>
using namespace std;

int main() {
    double positivos = 0;
    double A = 0;
    double valor;

    while(A < 6) {
        cin >> valor;

        if(valor > 0) {
            positivos++;
        }

        A++;
    }

    cout << positivos << " valores positivos" << endl;

    return 0;
}