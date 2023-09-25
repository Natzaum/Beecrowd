#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string friendsName;
    int friends = 0, distance, media = 0;
    while(getline(cin, friendsName)){
        cin >> distance;
        cin.ignore();

        media += distance;

        friends++;
    }   

    cout << fixed << setprecision(1) << (double)media/friends << endl;
    return 0;
}