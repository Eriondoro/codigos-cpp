#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int N=12;
    double M[N][N], tot, v;
    char o;

    cin >> o;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> v;
            M[i][j] = v;
            
        }
    }

    for(int i=0; i<5; i++){
        for(int j=i+1; j<N-1-i; j++){
            tot += M[i][j];
        }
    }

    if(o == 'S') printf("%.1lf\n", tot);
    else if (o == 'M') printf("%.1lf\n", tot/30);

    return 0;
}