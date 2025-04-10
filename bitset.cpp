#include <bits/stdc++.h>
using namespace std;
int main()
{
bitset<10> a(12);
bitset<10> b(10);
cout << "a = (" << a << ")\n";
cout << "b = (" << b << ")\n";
cout << "a&b = (" << (a&b) << ")\n";
cout << "a|b = (" << (a|b) << ")\n";
cout << "a^b = (" << (a^b) << ")\n";
return 0;
}