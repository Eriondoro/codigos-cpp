#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, x, y, z;
    double cont=0;
    cin >> k;

    for(x=1; x<7; x++){
        for(y=1; y<7; y++){
            for(z=1; z<7; z++){
                if(x + y + z == k) cont++;
            }
        }
    }

    printf("%.12lf\n", cont/216);

    return 0;
}