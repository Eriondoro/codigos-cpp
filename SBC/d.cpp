#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double a, b;
    string s, t;

    cin >> n;
    cin >> s >> t;

    for(int i=0; i<n; i++){
        if(s[i] == '*') {
            a++;
            if(t[i] != '*') b++;
        }
    };

    printf("%.2lf\n", b/a);

    return 0;
}