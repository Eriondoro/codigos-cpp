#include <bits/stdc++.h>
using namespace std;

int main(){
    double x1, y1, x2, y2, dist;

    cin >> x1 >> y1 >> x2 >> y2;

    dist = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    printf("%.4lf km/l\n", dist);
    
    return 0;
}