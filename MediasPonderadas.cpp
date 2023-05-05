#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a,b,c,media;
    int N;
    cout << fixed << setprecision(1);

    cin >> N;
    for (int i = 0;i<N; i++){
        cin >> a >> b >> c;
        media = (a*2 + b*3 + c*5) / 10;
        cout << media << endl;
    }

    return 0;
}