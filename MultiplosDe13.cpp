#include <iostream>
using namespace std;

int main() {
    int X, Y;
    int soma = 0;

    cin >> X >> Y;

    if (X > Y) {
        swap(X, Y);
    }

    for (int i = X; i <= Y; i++) {
        if (i % 13 != 0) {
            soma += i;
        }
    }

    cout << soma << endl;

    return 0;
}