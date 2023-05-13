#include <iostream>

using namespace std;

int main() {
    int valores[100];

    for (int i = 0; i < 100; i++) {
        cin >> valores[i];
    }

    int maiorValor = valores[0];
    int posicaoMaior = 0;

    for (int i = 1; i < 100; i++) {
        if (valores[i] > maiorValor) {
            maiorValor = valores[i];
            posicaoMaior = i;
        }
    }

    cout << maiorValor << endl;
    cout << posicaoMaior + 1 << endl;

    return 0;
}