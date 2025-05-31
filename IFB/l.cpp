#include<bits/stdc++.h>

using namespace std;

int qualidade[10], acidez[10];
int pd[11][1000001][11];
int limit = 1;

int N, X;

int solve(int i, int acid, int qtd){
    if(qtd == limit)
        return 0;

    if(i == N){
        return 0;
    }

    if(acid == X){
        return 0;
    }

    if(pd[i][acid][qtd] != -1){
        return pd[i][acid][qtd];
    }

    int naopegar = solve(i + 1, acid, qtd);

    int pegar = 0;

    if(acid + acidez[i] <= X)
        pegar = solve(i + 1, acid + acidez[i], qtd + 1) + qualidade[i];



    return pd[i][acid][qtd] = max(naopegar, pegar);
}

int main(){
    cin >> N >> X;

    for(int i = 0; i < N; i++){
        cin >> acidez[i] >> qualidade[i];
    }

    for(int i = 0; i < N; i++){
        memset(pd, -1, sizeof pd);

        cout << solve(0, 0, 0) << endl;
        limit++;
    }

    return 0;
}