#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 
int main() {
 
    char o;
    cin >> o;

    int N=12;
    double M[N][N], tot;
    
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        cin >> M[i][j];
        if(i < 6 && j > N-i-1 && j < i) tot += M[i][j];
      }
    }

    for(int i=7; i<N; i++){
      for(int j=0; j<i; j++){
        cin >> M[i][j];
        if(j > N-i-1) tot += M[i][j];
      }
    }
    
    if(o == 'S') printf("%.1lf\n", tot);
    else if (o == 'M') printf("%.1lf\n", tot/66);

    return 0;
}