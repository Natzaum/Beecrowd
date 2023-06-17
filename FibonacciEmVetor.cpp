#include <iostream>
using namespace std;

unsigned long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        unsigned long long fib[n + 1];
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        return fib[n];
    }
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        unsigned long long result = fibonacci(N);
        cout << "Fib(" << N << ") = " << result << endl;
    }

    return 0;
}
