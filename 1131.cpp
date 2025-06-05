#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, toti, g, totg, resp, gg;

    toti = totg = gg = 0;

    while(resp != 2){
        cin >> i >> g;
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> resp;
        
        if(i > g) toti++;
        else if(i < g) totg++;

        gg++;
    }

    cout << gg << " grenais\nInter:" << toti << "\nGremio:" << totg << "\nEmpates:" << gg-(toti+totg) << "\n";
    if(toti > totg) cout << "Inter ";
    else if (totg > toti) cout << "Gremio ";

    cout << "venceu mais\n";


    return 0;
}