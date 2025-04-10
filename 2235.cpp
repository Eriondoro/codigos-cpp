#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int A, B, C;
    set<int> s;

    cin >> A >> B >> C;

    s.insert(A);
    s.insert(B);
    s.insert(C);

    if(s.size() == 2) cout << "N" << endl;
    
    

    return 0;
}