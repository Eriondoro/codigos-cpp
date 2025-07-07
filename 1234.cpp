#include <bits/stdc++.h>
using namespace std;

int main(){
    string sentenca;
    int contador=0;

    while(getline(cin, sentenca)){
        contador=0;
        for(int i=0; sentenca.size(); i++){
            if(isalpha(c)){
                if(contador % 2 == 0){
                    c = toupper(c);
                } else {
                    c = tolower(c);
                }
                contador++;
            }
        }

        cout << sentenca << "\n";
    }

    return 0;
}