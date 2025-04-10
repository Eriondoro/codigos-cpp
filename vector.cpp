#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    vector<int> v, res;
    vector<int>::iterator it;
    int arm = 0, tot;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        v.push_back(x);
    }

    for (it = v.begin(); it != v.end(); ++it)
    {
        tot = *it;

        res.push_back(*it);

        if(tot < arm)
            arm = tot;
        else
            res.erase(res.begin(), res.end());
        tot = 0;
    }

    for (it = res.begin(); it != res.end(); ++it)
    {

        printf("%d ", *it);
    }
    printf("\n");
    return 0;
}