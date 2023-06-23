#include <iostream>
using namespace std;

int main() {
    int par[5];
    int impar[5];
    int parIndex = 0;
    int imparIndex = 0;

    for (int i = 0; i < 15; i++) {
        int valor;
        cin >> valor;

        if (valor % 2 == 0) {
            par[parIndex] = valor;
            parIndex++;
            if (parIndex == 5) {
                for (int j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
                parIndex = 0;
            }
        } else {
            impar[imparIndex] = valor;
            imparIndex++;
            if (imparIndex == 5) {
                for (int j = 0; j < 5; j++) {
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                imparIndex = 0;
            }
        }
    }

    for (int i = 0; i < imparIndex; i++) {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }

    for (int i = 0; i < parIndex; i++) {
        cout << "par[" << i << "] = " << par[i] << endl;
    }

    return 0;
}
