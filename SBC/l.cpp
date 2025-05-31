#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, teto;

    cin >> n;

    teto = n * 1000000LL * 8LL;

    long long qubits = (long long)ceil(log2((double)teto));

    cout << qubits << endl;

    return 0;
}