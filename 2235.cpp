#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B, C;
    vector<int> tmp;
    vector<int>::iterator it;
    
    cin >> A >> B >> C;
    
    tmp.push_back(A);
    
    it = find(tmp.begin(), tmp.end(), B);
    if(it == tmp.end()) tmp.push_back(B);
    
    it = find(tmp.begin(), tmp.end(), C);
    if(it == tmp.end()) tmp.push_back(C);
    
    sort(tmp.begin(), tmp.end());
    
    if (tmp.size() < 3 || tmp[0]+tmp[1]-tmp[2] == 0 ) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}