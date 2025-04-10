#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, b = {1, 3, 5, 7, 9}, c, d;
    set<int>:: iterator it;
    int i, tam;

    if (a.size() > b.size())
        tam = a.size();
    else
        tam = b.size();

    for (it = a.begin(); it != a.end(); ++it)
    {
        c.insert(*it);
    }
    for (it = b.begin(); it != b.end(); ++it)
    {
        c.insert(*it);
    }
    for (it = c.begin(); it != c.end(); ++it)
    {
        printf("%d", *it);
    }
    return 0;
}