#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    
    while(cin >> x >> y){
        if(x > 0 && y > 0) cout << "primeiro";
        else if(x > 0 && y < 0) cout << "quarto";
        else if(x < 0 && y > 0) cout << "segundo";
        else if(x < 0 && y < 0) cout << "terceiro";
        else break;
        
        cout << endl;
    }
 
    return 0;
}