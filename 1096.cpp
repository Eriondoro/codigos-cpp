#include <bits/stdc++.h>
using namespace std;

int main() {
    int i=1,j=7;
    
    while(i < 10){
        while(j>4){
            cout << "I=" << i << " J=" << j << endl;
            j--;
        }
        i+=2; j=7;
    }
 
    return 0;
}