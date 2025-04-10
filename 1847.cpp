#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C;

    cin >> A >> B >> C;

    if((A > B && B <= C) || 
        (A > B && B > C && (B-C) < (A-B)) || 
        (A < B && B < C && (B-A) <= (C-B)) || 
        (A == B && B < C)){
        cout << ":)" << endl;
    } else if((A < B && B >= C) || 
        (A < B && B < C && (B-A) > (C-B)) || 
        (A > B && B > C && (B-C) >= (A-B)) || 
        (A == B && B > C) || 
        (A == B && B == C)){
        cout << ":(" << endl;
    }

}

