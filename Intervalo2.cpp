#include <iostream>

using namespace std;

int main() {
    int N;
    int dentro = 0, fora = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int X;
        cin >> X;

        if (X >= 10 && X <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

    cout << dentro << " in" << endl;
    cout << fora << " out" << endl;

    return 0;
}