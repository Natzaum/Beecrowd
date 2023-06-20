#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double X;
    cin >> X;

    double N[100];
    N[0] = X;

    for (int i = 1; i < 100; i++) {
        N[i] = N[i - 1] / 2.0;
    }

    cout << fixed << setprecision(4);

    for (int i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}