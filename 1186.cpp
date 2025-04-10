#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    char o;
    cin >> o;

    int N=12, M[N][N];
    double v, tot;
    
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        cin >> v;
        M[i][j] = v;
      }
    }

    for(int i=1; i<N; i++){
      for(int j=N-1; j>N-(1+i); j--){
        tot += M[i][j];
      }
    }
    
    if(o == 'S') cout << tot << endl;
    else if (o == 'M') printf("%.1lf\n", tot/66);

    return 0;
}