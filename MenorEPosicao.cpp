#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int X[N];
    int menorValor = 0;
    int posicao = 0;

    for (int i = 0; i < N; i++) {
        cin >> X[i];
        if (i == 0 || X[i] < menorValor) {
            menorValor = X[i];
            posicao = i;
        }
    }

    cout << "Menor valor: " << menorValor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}
