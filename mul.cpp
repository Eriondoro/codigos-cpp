#include <bits/stdc++.h>
#define N 10000007
using namespace std;

int mul_inv(int a, int b){
    if(b==0) return 1;

    int b0 = b;
    int t, q;
    int x0 = 0, x1 = 1;

    while(a > 1){
        q = a/b;
        t = b, b = a % b, a = t;
        t = x0, x0 = x1 -q * x0, x1 = t;
    }

    while(x1<0) x1 += b0;

    return x1;
}

int main(){
    int m, k;
    cin >> m >> k;

    long long int fat[m+10];
    fat[0] = fat[1] = 1;

    for(int i=2; i<=m; i++){
        fat[i] = (i * fat[i-1]) % N;
    }

    long long int comb = (fat[m] * mul_inv((fat[k] * fat[m-k]) % N, N)) % N;

    return 0;
}