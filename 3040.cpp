#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t, h, d, g;
    cin >> t;
    
    while(t--){
        cin >> h >> d >> g;
        
        if(h <= 300 && h >= 200 && d >= 50 && g >= 150) cout << "Sim" << endl;
        else cout << "Não" << endl;
    }
 
    return 0;
}