#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int N, j=0, a=0, i=0;
    
    cin >> N;
    
    for(int i=0; i<N;i++){
        int z;
        cin >> z;

        if(z==1){
            j++;
        } else if (z==2){
            a++;
        } else if (z==3){
            i++;
        }
    }

    printf("Jovem: %d\nAdulta: %d\nIdosa: %d\n", a, j, a);














    
    return 0;
}