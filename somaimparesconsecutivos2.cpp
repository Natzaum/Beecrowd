#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    while (N > 0) {
        int X, Y;
        cin >> X >> Y;

        int sum = 0;

        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        for (int i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        cout << sum << endl;

        N--;
    }

    return 0;
}