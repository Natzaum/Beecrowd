#include <iostream>

using namespace std;

int main() {
    int M, N;
    while(true){
        cin >> M >> N;
        if(M > N){
            swap(M, N);
        }
        if(M <= 0 or N <= 0){
            break;
        }

        int soma = 0;
        
        for(int consecutivos = M; consecutivos <= N; consecutivos++){
            cout << consecutivos << " ";
            soma += consecutivos;
        }
        cout << "Sum=" << soma << endl; 
    }
    return 0;
}