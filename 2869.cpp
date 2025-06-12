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
    int casos_teste, num, m, i, j, a, aux=1, maior;

    cin >> casos_teste;
    vector<int> particao_mult, primo = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    vector<int> fatoracao;
    vector<int>::iterator it;

    while(casos_teste--){
        cin >> num;
        m = j = num;

        if(num == 1 || num == 0){
            cout << num << endl;
            continue;
        }

        while(j > 1){
            maior=999999999;

            i = j;
            while(i >= 2){
                cout << "m: " << m << " i: " << i << endl;
                if(m % i == 0){
                    cout << "i: " << i << endl;
                    particao_mult.push_back(i);
                    m /= i;
                    if(m % i != 0) i--;
                } else i--;
                if(m == 1) break;
            }
            
            for(int h=0; h < particao_mult.size(); h++) {
                aux = 1;
                cout << "primo: " << primo[h] << " it: " << particao_mult[h]-1 << endl;
                aux *= fast_expo(primo[h], particao_mult[h]-1, N) % N;
                // aux *= (particao_mult[h]-1) * log(primo[h]);
                aux = aux % N;
                
            }
            cout << "aux: " << aux << endl;
            
            if(maior > aux){
                maior = aux;
                cout << "maior: " << maior << endl;
                fatoracao.clear();
                fatoracao = particao_mult;
                // a = h;
            }

            cout << endl << endl;

            particao_mult.clear();

            m = num;
            j--;
        }

        m = 0;

        // for(it = fatoracao.begin(); it != fatoracao.end(); ++it){
        // // for(size_t h = 0; h < fatoracao.size(); h++){
        //     cout << "tamanho: " << (*it).size() << endl;
            
        // }

        aux = 1;
        for(int k = 0; k < fatoracao.size(); k++){
            cout << "primo: " << primo[k] << " it: " << fatoracao[k]-1 << endl;
            aux *= fast_expo(primo[k], fatoracao[k]-1, N) % N;
        }

        cout << aux << endl;
    }

    return 0;
}