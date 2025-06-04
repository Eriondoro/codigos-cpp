#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, t = 5;
    int v1=0;

    while(t--){
        cin >> a;
        if(a % 2 == 0) v1++;
    }

    cout << v1 << " valores pares\n";

    return 0;
}