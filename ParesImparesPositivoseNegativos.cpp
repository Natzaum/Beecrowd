#include <iostream>
using namespace std;

int main() {
    int pares = 0, impares = 0, positivos = 0, negativos = 0;
    int A = 0;
    int valor;

    while(A < 5){
        cin >> valor;
        if(valor % 2 == 0){
            pares++;
        }
        if(valor % 2 != 0){
            impares++;
        }
        if(valor > 0){
            positivos++;
        }
        if(valor < 0){
            negativos++;
        }

        A++;
    }

    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;

    return 0;
}