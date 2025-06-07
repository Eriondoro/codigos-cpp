#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    // O objetivo é minimizar o número de valores distintos após as operações
    // A resposta é o número de "blocos" de valores distintos consecutivos
    int ans = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i-1]) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
