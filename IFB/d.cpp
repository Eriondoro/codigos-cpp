#include <bits/stdc++.h>
using namespace std;

int main(){
    string daniel;
    
    getline(cin, daniel);

    size_t posicao = daniel.find("daniel sad ");
    while(posicao != string::npos){
        daniel.replace(posicao, 10, "daniel saad");
        posicao = daniel.find("daniel sad");
    }

    posicao = daniel.find("Daniel Sad ");
    while(posicao != string::npos){
        daniel.replace(posicao, 10, "Daniel Saad");
        posicao = daniel.find("Daniel Sad");
    }

    posicao = daniel.find("DANIEL SAD ");
    while(posicao != string::npos){
        daniel.replace(posicao, 10, "DANIEL SAAD");
        posicao = daniel.find("DANIEL SAD");
    }

    posicao = daniel.find("Daniel Sad,");
    while(posicao != string::npos){
        daniel.replace(posicao, 10, "Daniel Saad");
        posicao = daniel.find("Daniel Sad");
    }

    posicao = daniel.find("DANIEL SAD,");
    while(posicao != string::npos){
        daniel.replace(posicao, 10, "DANIEL SAAD");
        posicao = daniel.find("DANIEL SAD");
    }
    
    cout << daniel;
    
    return 0;
}