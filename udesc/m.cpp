#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, k, deg, deg_ant, machado, marcel, achou = 0;
    vector<int> escada;

    cin >> n >> a >> b;

    cin >> deg;
    escada.push_back(deg);

    for(int j=0; j<(n-1); j++){
        cin >> deg;

        deg_ant = escada.back();

        escada.push_back(deg_ant + deg);
    }

    cin >> k;

    marcel = escada[k-1] + b;

    for(int i=0; i < n; i++){
        if(escada[i]+a >= marcel && i != k-1){
            cout << "SIM\n" << i+1;
            achou = 1;
            break;
        }
    }

    if(achou == 0) cout << "NAO\n";
    
    return 0;
}