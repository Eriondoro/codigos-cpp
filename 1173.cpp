#include <bits/stdc++.h>
using namespace std;

int main(){
    double n;
    vector<double> vec;

    cin >> n;
    vec.push_back(n);
    cout << "N[0] = " << vec[0] << endl; 

    for(int i=1; i <= 9; i++){
        vec.push_back(vec[i-1]*2);
        cout << "N[" << i << "] = " << vec[i] << endl;
    }

    return 0;
}