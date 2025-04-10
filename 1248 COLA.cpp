#include <bits/stdc++.h>
using namespace std;

int main(){
    int entrada;
    cin >> entrada;
    cin.ignore();
    string d, c, a;
    set<char>::iterator it;
    
    for(int i=0; i<entrada; i++){
        set<char> dieta, consumido;
        bool cheater=false;
        
        getline(cin, d);
        getline(cin, c);
        getline(cin, a);
        
        for (char c:d) dieta.insert(c);
        for (char c:c) consumido.insert(c);
        for (char c:a) consumido.insert(c);

        for (char c:consumido){
            // negação da condição / !dieta.find(c);
            if(dieta.find(c) == dieta.end()) {
                cout << "CHEATER" << endl;
                cheater = true;
                break;
            } else {
                if(c != '\0'){
                    it = dieta.find(c);
                    dieta.erase(it);
                }
            }
        }

        if(!cheater){
            for (char c:dieta) cout << c;
            cout << endl;
        }
        dieta.clear();
        consumido.clear();
    }

    return 0;
}