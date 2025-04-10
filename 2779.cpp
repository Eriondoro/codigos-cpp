#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int N, M, X;
    set<int> alb;

    cin >> N >> M;

    while(M--){
        cin >> X;
        alb.insert(X);
    }

    cout << N-alb.size() << endl;

    return 0;
}