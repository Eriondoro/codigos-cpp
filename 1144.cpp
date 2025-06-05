#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, n;

    cin >> i;

    for(long long int a=1; a<=i; a++){
        cout << a << " " << (long long)(a * a) << " " << (long long)(a * a * a) << endl;
        cout << a << " " << (long long)(a * a + 1) << " " << (long long)(a * a * a + 1) << endl;
    }

    return 0;
}