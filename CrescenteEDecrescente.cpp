#include <iostream>

using namespace std;

int main() {
    int X, Y;

    while(true){
        cin >> X >> Y;

        if(X > Y){
            cout << "Decrescente" << endl;
        }
        else if(X < Y){
            cout << "Crescente" << endl;
        }
        else{
            break;
        }
    }
return 0;
}