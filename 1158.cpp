#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, tot;
    cin >> a;

    while(a--){
        cin >> b >> c;
        if(b % 2 == 0) b++;
        
        tot = b;
        c--;
        
        while(c--){
            b += 2;
            tot += b;
        }

        cout << tot << endl;
    }

    return 0;
}