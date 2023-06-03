#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float nota1, nota2;
    float media;

    cout << fixed << setprecision(2);

    while (true) {
        cin >> nota1;

        if (nota1 >= 0 && nota1 <= 10)
            break;

        cout << "nota invalida" << endl;
    }

    while (true) {
        cin >> nota2;

        if (nota2 >= 0 && nota2 <= 10)
            break;

        cout << "nota invalida" << endl;
    }

    media = (nota1 + nota2) / 2;

    cout << "media = " <<  media << endl;

    return 0;
}