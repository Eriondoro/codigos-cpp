#include <bits/stdc++.h>
using namespace std;

int main() {
    int i=1,j=7, t=3;
    
    while(i < 10){
        while(t--){
            cout << "I=" << i << " J=" << j << endl;
            j--;
        }
        i+=2; j+=5; t=3;
    }
 
    return 0;
}