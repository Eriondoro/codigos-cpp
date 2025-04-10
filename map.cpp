#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    map<string, int>::iterator it;
    int mai = 0, men = 999999;
    string maior, menor;

    m["jao"] = 784;
    m["lili"] = 1300;
    m["luana"] = 1000;
    
    for (it = m.begin(); it != m.end(); ++it)
    {
        if((it->second) > mai)
            mai = it->second;
            maior = it->first;
        if((it->second) < men)
            men = it->second;
    }

    cout << m[maior] << " - " << men;
    return 0;
}