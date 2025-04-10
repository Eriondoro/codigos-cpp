#include <bits/stdc++.h>
using namespace std;

int main(){
    string RNA, comp;
    int cont, i;

    while(cin >> RNA){
        cont = i = 0;

        while(i < RNA.size()-1 && RNA.size() > 0){
            // comp = RNA[i] + RNA[i+1]
            comp = RNA.substr(i, 2);
            
            if(comp == "BS" || comp == "SB" || comp == "FC" || comp == "CF"){
                RNA.erase(RNA.begin()+i, RNA.begin()+(i+2));
                cont++;
                if (i > 0) i--;
            } else {
                i++;
            }
        }

        printf("%d\n", cont);
    }

    return 0;
}