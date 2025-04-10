#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int N, i, y, som=0;
    
    cin >> N;
    int m[N][N];
    
    for(i=0; i<N;i++){
        for(y=0; y<=i; y++){
            int a;
            cin >> a;
            m[i][y] = a;
        }
    }

    i = y = 0;

    som = m[i][y];

    while(i < N){
        if(m[i+1][y] > (m[i+1][y+1] > m[i+1][y-1])){
            som = som + m[i+1][y];
            i++;
        } else if (m[i+1][y] > (m[i+1][y+1] < m[i+1][y-1])) {
            som = som + m[i+1][y];
            i++;
        } else if(m[i+1][y] < (m[i+1][y+1] > m[i+1][y-1])){
            som = som + m[i+1][y+1];
            i++;
            y++;
        } else if(m[i+1][y] < (m[i+1][y+1] < m[i+1][y-1])){
            som = som + m[i+1][y-1];
            i++;
            y--;
        }
    }

    cout << som << endl;

    return 0;
}