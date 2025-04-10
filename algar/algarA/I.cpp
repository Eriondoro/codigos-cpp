#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int N, nt=0, t=0, i;
    vector<string> lista;

    cin >> N;
    
    for(i=0; i<N;i++){
        char c;
        string item;
        cin >> c >> item;

        if(c == '*'){
            t++;
        } else if (c == '-'){
            nt++;
        }

        lista.push_back(item);
    }

    sort(lista.begin(), lista.end());

    for(i=0; i<lista.size(); i++){
        cout << lista[i] << endl;
    }
    printf("Tinha no mercado: %d - Nao tinha no mercado: %d\n", t, nt);

    return 0;
}