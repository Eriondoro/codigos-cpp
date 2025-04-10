#include <bits/stdc++.h>
using namespace std;

int main() {
    int cem, cinq, vin, dez, cinc, dois, um;
    double N;
    
    cin >> N;

    int a = static_cast<int>(N);
    int pd = static_cast<int>((N - a) * 100);

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
    
    cout << "NOTAS:" << endl;
    cout << cem << " nota(s) de R$ 100.00" << endl;
    cout << cinq << " nota(s) de R$ 50.00" << endl;
    cout << vin << " nota(s) de R$ 20.00" << endl;
    cout << dez << " nota(s) de R$ 10.00" << endl;
    cout << cinc << " nota(s) de R$ 5.00" << endl;
    cout << dois << " nota(s) de R$ 2.00" << endl;

    cinq = pd/50;
    pd = pd % 50;
    vin = pd/25;
    pd = pd % 25;
    dez = pd/10;
    pd = pd % 10;
    cinc = pd/5;
    pd = pd % 5;

    cout << "MOEDAS:" << endl;
    cout << um << " moeda(s) de R$ 1.00" << endl;
    cout << cinq << " moeda(s) de R$ 0.50" << endl;
    cout << vin << " moeda(s) de R$ 0.25" << endl;
    cout << dez << " moeda(s) de R$ 0.10" << endl;
    cout << cinc << " moeda(s) de R$ 0.05" << endl;

    um = pd/1;
    cout << um << " moeda(s) de R$ 0.01" << endl;
}