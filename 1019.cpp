#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int h, m, N;
    
    cin >> N;
    
    h = N/3600;
    N = N % 3600;
    m = N/60;
    N = N % 60;
    
    cout << h << ":" << m << ":" << N;
 
    return 0;
}