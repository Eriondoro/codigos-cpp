#include <bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin >> a;

    for(int i=0; i<a.size(); i++){
        a[i] = tolower(a[i]);
    }

    size_t enc = a.find("zelda");

    if (enc != string::npos){
        printf("Link Bolado\n");
    } else {
        printf("Link Tranquilo\n");
    }

    return 0;
}

// int main(){
//     string a, zelda = {"zelda"};
//     int at = 0, y = 0;
//     cin >> a;

//     for(int i=0; i<a.size()-1; i++){
//         a[i] = tolower(a[i]);

//         if(a[i] == zelda[4] && at == 4){
//             printf("Link Bolado\n");

//             return 0;
//         } else if (a[i] == zelda[y]){
//             at++;
//             y++;
//         } else {
//             at--;
//             y--;
//         }
//     }

//     printf("Link Tranquilo\n");

//     return 0;
// }

// Algoritmo Z
// Algoritmo KMP
// Árvore de Prefixo    Trie
// Trie Otimizada   Álgoritmo Aho-Corasick
