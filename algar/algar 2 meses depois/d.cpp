#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;

    cin >> n >> k;

    int fat[n+2];
    fat[0] = fat[1] = 1;

    for(int i=2; i<=n; i++){
        fat[i] = (i * fat[i-1]);
    }

    cout << fat[n] / (fat[k] * fat[n-k]) << endl;

    return 0;

}