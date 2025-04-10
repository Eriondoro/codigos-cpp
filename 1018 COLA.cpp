#include <bits/stdc++.h>
using namespace std;

int main() {
    int cem, cinq, vin, dez, cinc, dois, um, a;
    
    cin >> a;

    cout << a;
    //divisao inteira, 123 / 100 = 1 (centena)
    cem = a/100;
    //atualizar o valor de a subtraindo a centena, % operador de resto 10 % 3 = 1, resto da divisao 10/3
    a = a % 100;
    cinq = a/50;
    a = a % 50;
    vin = a/20;
    a = a % 20;
    dez = a/10;
    a = a % 10;
    cinc = a/5;
    a = a % 5;
    dois = a/2;
    a = a % 2;
    um = a/1;
    
    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << cinq << " nota(s) de R$ 50,00" << endl;
    cout << vin << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cinc << " nota(s) de R$ 50,00" << endl;
    cout << dois << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;
}