#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string fruitsName, line;
    stringstream fluxo;
    int days = 0, fruits;
    double value, kgPerDay = 0.0, spendPerDay = 0.0;

    cin >> days;

    for(int i = 1; i <= days; i++){
        cin >> value;
        cin.ignore();

        getline(cin, line);

        fruits = 0;
        
        fluxo.clear();
        fluxo << line;

        while(fluxo >> fruitsName){
            fruits++;
        }

        cout << "day " << i << ": " << fruits << " kg" << endl;

        kgPerDay += fruits;
        spendPerDay += value;
    }

    kgPerDay /= days;
    spendPerDay /= days;

    cout << fixed << setprecision(2) << kgPerDay << " kg by day" << endl;
    cout << fixed << setprecision(2) << "R$ " << spendPerDay << " by day" << endl;

    return 0;
}