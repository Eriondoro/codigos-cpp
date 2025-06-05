#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, contA, contG, contD;

    contA = contG = contD = 0;
    
    while(cin >> x){
        if(x == 1) contA++;
        else if(x == 2) contG++;
        else if(x == 3) contD++;
        else if(x == 4) break;
    }

    cout << "MUITO OBRIGADO\nAlcool: " << contA << "\nGasolina: " << contG << "\nDiesel: " << contD << endl;
 
    return 0;
}