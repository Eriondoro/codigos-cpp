#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, t=6;
    cin >> X;
    
    if(X % 2 == 0) X++;
    else{
        cout << X << endl;
        X += 2;
        t--;
    }
    
    while(t--){
        cout << X << endl;
        X += 2;
    }

    return 0;
}