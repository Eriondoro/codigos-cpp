#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, w, x;

    while(cin >> w){
        for(i=0; i<w; i++){
            for(j=0; j<w; j++){
                if(i+j == w-1) x=2;
                else if(i==j) x=1;
                else x=3;
                cout << x;
            }
            cout << endl;
        }
    }
    
    return 0;
}