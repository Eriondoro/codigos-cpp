#include <bits/stdc++.h>
using namespace std;
#define N 1000000007

long long fast_expo(long long a, long long b, long long M) {
    long long res = 1;
    a %= M; // Garante que a já está modularizado
    while (b > 0) {
        if (b % 2 == 1) { // Se o bit menos significativo for 1 (b é ímpar)
            res = (res * a) % M;
        }
        a = (a * a) % M; // Quadra a base
        b /= 2;          // Desloca o expoente para a direita (remove o bit)
    }
    return res;
}


int main(){
    int aux;

    aux = 1;

    aux *= fast_expo(2, 2, N) % N;
    aux *= fast_expo(3, 2, N) % N;
    aux = aux % N;
        
    cout << "aux: " << aux << endl;

    return 0;
}