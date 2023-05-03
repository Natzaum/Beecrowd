#include <iostream>
using namespace std;

int main() {
    int pares = 0;
    int A = 0;
    int valor;

    while(A < 5){
        cin >> valor;
        if(valor % 2 == 0){
            pares++;
        }

        A++;
    }

    cout << pares << " valores pares" << endl;
    return 0;
}