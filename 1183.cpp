#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    char o;
    cin >> o;

    int N=12;
    double M[N][N], tot;
    
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        cin >> M[i][j];
      }
    }

    for(int i=0; i<N-1; i++){
      for(int j=i+1; j<N; j++){
        tot += M[i][j];
      }
    }
    
    if(o == 'S') cout << tot << endl;
    else if (o == 'M') printf("%.1lf\n", tot/66);

    return 0;
}