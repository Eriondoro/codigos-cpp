#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    int fat[n+1];
    
    fat[0] = fat[1] = 1;

    for(int i=2; i<=n; i++){
        fat[i] = i * fat[i-1];
    }

    cout << fat[n] << endl;
 
    return 0;
}