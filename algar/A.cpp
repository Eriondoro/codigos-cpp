#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> unic;
    string frase;

    getline(cin, frase);

    stringstream ss(frase);
    string palavra;

    while (ss >> palavra) {
        palavra.erase(remove_if(palavra.begin(), palavra.end(), ::ispunct), palavra.end());

        for (char &c : palavra) {
            palavra[c] = tolower(c);
        }

        if (!palavra.empty()) {
            unic.push_back(palavra);
        }
    }
    
    cout << unic.size() << endl;
    return 0;
}