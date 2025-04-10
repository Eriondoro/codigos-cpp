#include <bits/stdc++.h>

using namespace std;

int main(){
    string risada, risada2, risada3;
    vector<string> vog={"a", "e", "i", "o", "u"};

    cin >> risada;

    // itera sobre a palavra
    for(char c : risada){
        // verifica se o caracter c da palavra risada está contida em vog
        if (find(vog.begin(), vog.end(), string(1, c)) != vog.end()) {
            // insere por último
            risada2.push_back(c);
            // insere por primeiro
            risada3.insert(risada3.begin(), c);
        }
    }

    if(risada2 == risada3){
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}