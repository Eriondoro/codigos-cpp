#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int mmc(int a, int b) {
    return (a / mdc(a, b)) * b;
}

int main(){
    int t2, s, p;
    cin >> t2;

    while(t2--){
        string i, t;
        cin >> i >> t;
        stringstream a(i), b(t);
        string p1, p2, pm1, pm2;
        getline(a, p1, ':');
        getline(a, pm1, ':');
        getline(b, p2, ':');
        getline(b, pm2, ':');

        int h1 = stoi(p1);
        int m1 = stoi(pm1);
        int h2 = stoi(p2);
        int m2 = stoi(pm2);

        cin >> s >> p;

        int intervalo_mmc = mmc(s, p);

        int res = (h2 - h1) * 3600 + m2 - m1;

        res = res / intervalo_mmc;

        cout << res << endl;
        
    }

    return 0;
}