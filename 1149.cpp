#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, tot=0;

    cin >> a >> b;

    while(b < 1){
        cin >> b;
    }

    for(int i=0; i<=b-1; i++){
        tot += a + i;
    }

    cout << tot << endl;

    return 0;
}