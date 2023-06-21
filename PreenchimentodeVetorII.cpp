#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    int N[1000];
    int contador = 0;

    for (int i = 0; i < 1000; i++) {
        N[i] = contador;
        contador++;
        if (contador == T) {
            contador = 0;
        }
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
