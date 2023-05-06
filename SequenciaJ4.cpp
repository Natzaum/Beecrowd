#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    for (double I = 0; I <= 2; I=I+0.2){
    for(int J = 1; J <= 3; J++){

        cout << "I=" << I << " " << "J=" << J + I << endl;
    }
    }
    return 0;
}