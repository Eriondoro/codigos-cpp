#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string S;

    cin >> N >> S;

    int c = 0, amnt = 1;

    for(int i = 1; i < N; i++){
        if(S[c] == S[i]){
            c = i;
            amnt++;
        }
        else if (S[c] > S[i]){
            c = i;
            amnt = 1;
        }
    }

    for(int i = 0; i < N; i++){
        if(S[i] == S[c]){
            amnt--;
        }
        else if(S[i] > S[c] && amnt > 0){
            swap(S[c], S[i]);
            break;
        }
    }

    cout << S << endl;

    return 0;
}