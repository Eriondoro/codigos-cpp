#include <bits/stdc++.h>

using namespace std;

int main() {
    int N=1;
    
    while(true){
        queue<int> pilha, resto;

        scanf("%d", &N);

        if(N==0) break;

        for(int i=1; i<=N; i++){
            pilha.push(i);
        }

        while(pilha.size() > 1){
            resto.push(pilha.front());
            pilha.pop();
            pilha.push(pilha.front());
            pilha.pop();
        }
        cout << "Discarded cards: ";
        while(resto.size() > 1){
            cout << resto.front() << ", ";
            resto.pop();
        }
        cout << resto.front() << endl;
        cout << "Remaining cards: " << pilha.front() << endl;
    }

    return 0;
}