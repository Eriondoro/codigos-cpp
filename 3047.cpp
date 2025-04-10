#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int M, A, B;
    vector<int> vec;

    cin >> M >> A >> B;

    vec.push_back(A);
    vec.push_back(B);
    vec.push_back(M-A-B);
    sort(vec.begin(), vec.end());

    cout << vec.back() << endl;
 
    return 0;
}