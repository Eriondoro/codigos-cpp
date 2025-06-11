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
    int z, n, m, i, j, a, aux=1, maior=0;
    cin >> z;
    vector<int> f1, primo = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    vector<vector<int>> fatoracao;
    vector<int>::iterator it;

    while(z--){
        cin >> n;
        m = j = n;

        if(n == 1 || n == 0){
            cout << m << endl;
            continue;
        }

        while(j > 1){
            i = j;
            // while(i >= 2){
            //     if(n % i == 0){
            //         f1.push_back(i);
            //         m /= i;
            //         if(m % i != 0) i--;
            //     } else break;
            //     if(m == 1) break;
            // }
            while(i >= 2){
                cout << "m: " << m << " i: " << i << endl;
                if(n % i == 0){
                    cout << "i: " << i << endl;
                    f1.push_back(i);
                    m /= i;
                    if(m % i != 0) i--;
                } else break;
                if(m == 1) break;
            }
            cout << "troca" << endl;

            for(int h=0; h < f1.size(); h++) {
                aux = 1;
                cout << "primo: " << primo[h] << " it: " << f1[h]-1 << endl;
                aux *= fast_expo(primo[h], f1[h]-1, N);
                // aux *= ((*it)[k]-1) * log(primo[k]);
                aux = aux % N;
                
            }
            
            if(maior < aux){
                maior = aux;
                cout << "maior: " << maior << endl;
                fatoracao.push_back(f1);
                // a = h;
            }

            m = n;
            j--;
        }

        m = 0;

        // for(it = fatoracao.begin(); it != fatoracao.end(); ++it){
        // // for(size_t h = 0; h < fatoracao.size(); h++){
        //     cout << "tamanho: " << (*it).size() << endl;
            
        // }

        aux = 1;
        for(size_t k = 0; k < fatoracao[a].size(); k++){
            aux *= fast_expo(primo[k], fatoracao[a][k]-1, N);
        }

        cout << aux << endl;
    }

    return 0;
}