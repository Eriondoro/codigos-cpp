#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, res=1;

    cin >> n;

    for(int i=0; i<n;i++){
        res = res * 2;
    }

    cout << res << endl;
    return 0;
}