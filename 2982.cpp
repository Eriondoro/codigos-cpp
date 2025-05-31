#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, C, V, G;
    char T;

    cin >> N;

    while (N--){
        cin >> T >> C;

        if(T == 'V') V += C;
        else if(T == 'G') G += C;
    }

    if(G > V) cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
    else cout << "A greve vai parar." << endl;

    return 0;
}