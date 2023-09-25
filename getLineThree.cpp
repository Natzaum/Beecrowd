#include <iostream>
#include <sstream>

using namespace std;

int main(){
    char genre;
    int wantedSize, cas, fem, mas, Size;
    string line;
    stringstream fluxo;

    cas = 0;

    while(cin >> wantedSize){
        if(cas > 0){
            cout << endl;
        }
        
        cin.ignore();

        getline(cin, line);
        fem = 0;
        mas = 0;

        fluxo.clear();
        fluxo << line;

        while(fluxo >> Size >> genre){
            if(Size == wantedSize){
                if(genre == 'F'){
                    fem++;
                }

                else{
                    mas++;
                }

            }
        }

        cout << "caso " << ++cas << ':' << endl;
        cout << "Pares Iguais: " << fem + mas << endl;
        cout << "F: " << fem << endl;
        cout << "M: " << mas << endl;

    }

    return 0;
}