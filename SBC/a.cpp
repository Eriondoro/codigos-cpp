#include <bits/stdc++.h>
using namespace std;

int main(){
    int c, g;

    cin >> c >> g;

    if(c == 1) cout << "vivo e morto\n";
    else if (c == 0 && g == 1) cout << "vivo\n";
    else if (c == 0 && g == 0) cout << "morto\n";

    return 0;
}