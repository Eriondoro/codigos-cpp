#include <stdio.h>
#include <bits/stdc++.h>
 
int main() {
 
    int a, b, c;
    double s, area;
    
    scanf("%d%d%d", &a, &b, &c);
    
    s = (a + b + c)/2;
    
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    
    printf("\n%.3lf", area);
 
    return 0;
}