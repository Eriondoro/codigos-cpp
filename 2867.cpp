#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int z, n, m;
    cin >> z;

    while(z--){
        cin >> n >> m;

        cout << floor(m*log10(n)+1) << endl;
    }

    return 0;
}