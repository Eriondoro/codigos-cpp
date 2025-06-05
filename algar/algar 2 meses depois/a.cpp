#include <bits/stdc++.h>
using namespace std;

int main(){
    set<string> tot;

    string frase;

    getline(cin, frase);
    
    string palavra;

    for (char &c : frase) {
        if(c != ' '){
            palavra.push_back(tolower(c));
        } else {
            tot.insert(palavra);
            palavra.clear();
        }
    }

    if (!palavra.empty()) {
        palavra.pop_back();
        tot.insert(palavra);
        palavra.clear();
    }
    
    cout << tot.size() << endl;

    return 0;
}