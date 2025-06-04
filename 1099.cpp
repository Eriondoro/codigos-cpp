#include <bits/stdc++.h>
using namespace std;

int main() {
    int z, a, b;

    cin >> z;
    
    while(z--){
        int c = 0, tot=0;
        cin >> a >> b;

        if(a > b) {
            c = b;
            b = a;
            a = c;
        }

        if(a%2 == 0) a++;
        else a+=2;

        for(int i=a; i<b; i+=2){
            tot += i;
        }

        cout << tot << endl;
    }
 
    return 0;
}