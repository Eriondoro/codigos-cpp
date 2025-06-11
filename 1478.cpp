#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, w=1;

    while(w != 0){
        cin >> w;
        if(w == 0) break;
        for(i=0; i<w; i++){
            for(j=0; j<w; j++){
                cout << abs(i-j)+1;
                if(j < w-1) cout << " ";
            }
            cout << endl;
        }
        cin.peek(); // Garante que não há leitura extra
        if(cin.peek() != EOF) cout << endl;
    }
    
    return 0;
}