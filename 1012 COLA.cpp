#include <bits/stdc++.h>
using namespace std;

int main(){
    double A, B, C;
    
    cin >> A >> B >> C;
    
    printf("TRIANGULO: %.3lf\n", A*C/2);
    // pi r*r
    printf("CIRCULO: %.3lf\n", C*C * 3.14159);
    //c altura, a b base;
    printf("TRAPEZIO: %.3lf\n", (A+B)*C / 2);
    printf("QUADRADO: %.3lf\n", B*B);
    printf("RETANGULO: %.3lf\n", A*B);
}