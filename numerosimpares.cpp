#include <iostream>
using namespace std;

int main() {
    int valor;
    cin >> valor;
    for(int A = 1; A <= valor; A++){
        if(A % 2 == 1){
            cout << A << endl;
        }
    }

    return 0;
}
