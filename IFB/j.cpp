#include <bits/stdc++.h>
using namespace std;

int main(){
    int AB, C;

    cin >> AB >> C;

    if(AB == 270 || C = 90) cout << "Olha o Claudio ali em cima!";

    if(AB <= 360 && AB >= 180){
        if(C <= 180 && C >= 0) cout << "Olha o Claudio ali em cima!";
        else if (C >= 180 && C <= 270) cout << "O Claudio ta do outro lado da roda!";
        
    } else {
        if(C <= 360 && C >= 180) cout << "O Claudio ta ali embaixo!";
    }

    cout << "Olha o Claudio ali em cima!";
    cout << "O Claudio ta ali embaixo!";
    cout << "O Claudio ta do outro lado da roda!";
    
    return 0;
}