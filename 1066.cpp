#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, t = 5;
    int v1=0, v2=0, p=0, n=0;

    while(t--){
        cin >> a;
        if(a % 2 == 0) v1++;
        else v2++;

        if(a > 0) p++;
        else if (a < 0) n++;
    }

    cout << v1 << " valor(es) par(es)\n";
    cout << v2 << " valor(es) impar(es)\n";
    cout << p << " valor(es) positivo(s)\n";
    cout << n << " valor(es) negativo(s)\n";

    return 0;
}