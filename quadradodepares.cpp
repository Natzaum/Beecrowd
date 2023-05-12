#include <iostream>

using namespace std;

int main() {

    int N;

    cin >> N;

    for (int i = 2; i <= N; i += 2) {
        int quadrado = i * i;
        cout << i << "^2 = " << quadrado << endl;
    }

    return 0;
}