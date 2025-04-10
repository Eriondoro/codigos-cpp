#include <bits/stdc++.h>

using namespace std;

bool myfunction (int i,int j) { return (i>j); }

int main() {
    int N, a;
    cin >> N;
    vector<int> par, impar;
    vector<int>::iterator it;
    
    for(int i=0; i<N; i++){
        cin >> a;
        if(a % 2 == 0) par.push_back(a);
        else impar.push_back(a);
    }

    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end(), myfunction);

    for(it=par.begin(); it!=par.end(); ++it){
        cout << *it << endl;
    }
    for(it=impar.begin(); it!=impar.end(); ++it){
        cout << *it << endl;
    }
    return 0;
}