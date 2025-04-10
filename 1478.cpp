#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, w=1;

    while(w != 0){
        cin >> w;
        for(i=0; i<w; i++){
            for(j=0; j<w; j++){
                // abs faz 3-2 e 2-3 serem 1 "positivo"
                cout << abs(i-j)+1;
                if(j < w-1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}