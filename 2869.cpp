#include <bits/stdc++.h>
using namespace std;
#define N 1000000007

int main(){
    int z, n, m, i, j, a, aux=1;
    cin >> z;
    vector<int> f1, primo = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    vector<vector<int>> fatoracao;
    vector<vector<int>>::iterator it;

    while(z--){
        cin >> n;
        m = j = n;

        if(n == 1 || n == 0){
            cout << m << endl;
            continue;
        }

        while(j > 1){
            i = j;
            while(i >= 2){
                if(m % i == 0){
                    f1.push_back(i);
                    m /= i;
                } else i--;
                if(m == 1) break;
            }
            fatoracao.push_back(f1);
            m = n;
            j--;
        }

        for(it = fatoracao.begin(); it != fatoracao.end(); ++it){
            for(size_t k = 0; k < it->size(); ++k) {
                aux *= ((*it)[k]-1) * log(primo[k]);
                aux = aux % N;
            }

            if(m < aux){
                m = aux;
                a = it;
            }
            aux = 1;
        }

        cout << m << endl;
    }

    return 0;
}