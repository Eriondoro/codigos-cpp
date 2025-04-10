#include <bits/stdc++.h>

using namespace std;

int main() {
    int N=1;
    vector<char> entrada, saida;
    char vagao;
    int i, ii, iii;
    
    while(N != 0){
        scanf("%d", &N);
        entrada.clear();
        saida.clear();
        stack<char> estacao;
        ii = iii = 0;

        for(i=0; i<N; i++){
            cin >> vagao;
            entrada.push_back(vagao);
        }
        for(i=0; i<N; i++){
            cin >> vagao;
            saida.push_back(vagao);
        }

        while(1){
            if (!estacao.empty() && iii < N && estacao.top() == saida[iii]){
                estacao.pop();
                printf("R");
                iii++;
            } else if(ii < N){
                estacao.push(entrada[ii]);
                printf("I");
                ii++;
            } else {
                break;
            }
        }
        if(estacao.empty()) printf("\n");
        else printf(" Impossible\n");
    }

    return 0;
}