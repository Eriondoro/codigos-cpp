#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int x, y, v;

    while(cin >> x){
      v=0;
      
      while(x--){
        cin >> y;

        if(y < 10 && v<2) v=1;
        else if(y < 20 && v<3) v=2;
        else v=3;
        
      }
      if(v==1) cout << "1" << endl;
      else if(v==2) cout << "2" << endl;
      else cout << "3" << endl;
    }
 
    return 0;
}