#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> div;

    cin >> n;

    for(int i=1; i<=n; i++){
        if(n % i == 0) div.push_back(i);
    }

    for(int i=0; i<div.size(); i++) cout << div[i] << endl;

    return 0;
}