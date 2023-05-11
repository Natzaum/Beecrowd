#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    int totalCobaias = 0;
    int totalRatos = 0;
    int totalSapos = 0;
    int totalCoelhos = 0;

    for (int i = 0; i < N; i++) {
        int quantia;
        char tipo;
        cin >> quantia >> tipo;

        totalCobaias += quantia;

        if (tipo == 'R') {
            totalRatos += quantia;
        } else if (tipo == 'S') {
            totalSapos += quantia;
        } else if (tipo == 'C') {
            totalCoelhos += quantia;
        }
    }

    int total = totalRatos + totalSapos + totalCoelhos;

    cout << "Total: " << totalCobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << totalCoelhos << endl;
    cout << "Total de ratos: " << totalRatos << endl;
    cout << "Total de sapos: " << totalSapos << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (double(totalCoelhos) / total) * 100 << " %" << endl;
    cout << "Percentual de ratos: " << (double(totalRatos) / total) * 100 << " %" << endl;
    cout << "Percentual de sapos: " << (double(totalSapos) / total) * 100 << " %" << endl;

    return 0;
}