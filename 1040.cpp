#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c, d, e, t = 4;
    
    cin >> a >> b >> c >> d;
    double med = a*2 + b*3 + c*4 + d*1/10;

    cout << "Media: " << med ;

    if(med > 6.9) cout << "\nAluno aprovado.\n";
    else if(med < 5) cout << "\nAluno reprovado.\n";
    else{
        cin >> e;
        cout << "Aluno em exame.\nNota do exame: " << (med+e)/2 << endl;
        if((med + e)/2 > 4.9) cout << "Aluno aprovado.\n";
        else cout << "Aluno reprovado.\n";

        cout << "Media final: " << med << endl;
    }

    return 0;
}