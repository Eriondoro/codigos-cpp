#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    double a, b, c;
    cin >> t;
    
    while(t--){
        cin >> a >> b >> c;
        printf("%.1lf\n", (a*2+b*3+c*5)/10);
    }

    return 0;
}