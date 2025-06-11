#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, j=0, N[1000];
    cin >> a;

    for(int i=0; i<1000; i++){
        cout << "N[" << i << "] = " << j << endl;
        if(j == (a-1)) j=0;
        else j++;
    }

    return 0;
}