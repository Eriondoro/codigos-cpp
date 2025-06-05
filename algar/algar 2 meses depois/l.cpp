#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string> tot;

    string frase;

    getline(cin, frase);
    
    string palavra;
    char ultima_letra;

    for (char &c : frase) {
        if(c == 'r' && ultima_letra != 'r'){
            palavra.push_back('l');
            ultima_letra = 'l';
        } else if(c == ' ' || c == '.' && ultima_letra){

        } else {
            palavra.push_back(c);
            ultima_letra = c;
        }
    }

    for (char &c : frase) {
        if(frase[c-1] == 'r' && frase[c] != ' ') frase[c] = 'l';
    }

    char d = 'r';
    cout << frase[2];
    cout << frase[d] << frase[d+1] << endl;

    cout << tot.size() << endl;

    return 0;
}