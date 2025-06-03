#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int z, a, b, m, l=0, p=0;
    double lucas, pedro;
    vector<int> rod;
    cin >> z;

    while(z--){
        scanf("%d^%d", &a, &b);
        scanf("%d!", &m);

        lucas = b * log(a);
        pedro = m * log(m) - m + log(2*M_PI*m)/2;

        if(lucas > pedro) {
            l++; rod.push_back(1);
        }
        else if(lucas < pedro){
            p++; rod.push_back(2);
        }
    }

    if(l > p) cout << "Campeao: Lucas!\n";
    else if (l < p) cout << "Campeao: Pedro!\n";
    else cout << "A competicao terminou empatada!\n";

    for(int i=0; i < rod.size(); i++){
        cout << "Rodada #" << i+1;
        if(rod[i] == 1) cout << ": Lucas";
        else cout << ": Pedro";
        cout << " foi o vencedor\n";
    }

    return 0;
}