#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int X, Y, N;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> X >> Y;
        cout << fixed << setprecision(1);
        if(Y == 0){
            cout << "divisao impossivel" << endl;
        }
        else{
            double resultado = static_cast<double>(X) / Y;
            cout << fixed << setprecision(1) << resultado << endl;
        }
    }
return 0;
}