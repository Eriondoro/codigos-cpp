#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t=2, n, u;
    double v, tot;
    
    while(t--){
        cin >> n >> u >> v;
        tot = tot + u*v;
    }
    
    printf("VALOR A PAGAR: R$ %.2lf\n", tot);
 
    return 0;
}