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

int main(){
    int y;
    long long k;
    cin >> y >> k;

    long long x = 1;

    while (k > 0) {
        int d = mdc(x, y);
        long long mdc_valor = x + d;

        while (mdc(mdc_valor, y) == d) {
            mdc_valor += d;
        }

        long long max_passos = (mdc_valor - x) / d;

        long long passos = min((long long)k, max_passos);

        x += passos * d;
        k -= passos;
    }

    cout << x << endl;

    return 0;
}