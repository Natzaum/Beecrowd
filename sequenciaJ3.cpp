#include <iostream>

using namespace std;

int main() {
    int i = 1;
    int j = 7;

    while (i <= 9) {
        for (int count = 0; count < 3; count++) {
            cout << "I=" << i << " J=" << j << endl;
            j--;
        }
        i += 2;
        j += 5;
    }

    return 0;
}
