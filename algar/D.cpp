#include <bits/stdc++.h>
using namespace std;

int fat(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int comb(int n, int k) {
    return fat(n) / (fat(k) * fat(n - k));
}

int main(){
    int n, k;

    cin >> n >> k;

    cout << comb(n, k) << endl;

    return 0;

}