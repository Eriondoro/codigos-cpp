#include <bits/stdc++.h>
using namespace std;

int main(){
    int z, n, m, i=0;
    cin >> z;
    vector<pair<int, int>> primo = {{2, 0}, {3, 0}, {5, 0}, {7, 0}, {11, 0}, {13, 0}, {17, 0}, {19, 0}, {23, 0}, {29, 0}};
    vector<pair<int, int>>::iterator it;

    while(z--){
        cin >> n;

        for(it = primo.begin(); it != primo.end(); ++it){
            m = n;
            while(m % it->first == 0){
                m /= it->first;
                it->second++;
            }
        }
    }

    for(it = primo.begin(); it != primo.end(); ++it){
        cout << endl << it->first << " " << it->second << endl;
    }


    return 0;
}