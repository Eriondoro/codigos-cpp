#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int N, K;
    
    vector<string> alunos;
    
    cin >> N >> K;
    
    for(int i=0; i<N;i++){
        string x;
        cin >> x;
        
        alunos.push_back(x);
    }
    
    sort(alunos.begin(), alunos.end());
    
    cout << alunos[K-1] << endl;

    return 0;
}