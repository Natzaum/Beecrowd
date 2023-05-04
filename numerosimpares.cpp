#include <iostream>
using namespace std;

int main() {
    int valor, valor6 = 0;

    cin >> valor;

    while(valor6 < 6){
        if(valor % 2 == 1){
            cout << valor << endl;
            valor6++;
        }
        valor++;
    }

    return 0;
}