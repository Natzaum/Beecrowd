#include <iostream>

using namespace std;

int main() {
    int X, Y;
    int soma = 0;

    cin >> X >> Y;

    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    cout << soma << endl;

    return 0;
}