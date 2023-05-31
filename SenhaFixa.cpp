#include <iostream>

using namespace std;

int main() {

    inicio:
    int senha = 0;
    cin >> senha;

    if(senha != 2002){
        cout << "Senha Invalida" << endl;
        goto inicio;
    }
    else{
        cout << "Acesso Permitido" << endl;
    }


    return 0;
}