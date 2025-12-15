/* it will convert a decimal to binary and returns how many times 1 appear in binary */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 7;
    int out = __builtin_popcount(x);
    cout << out; 
    return 0;
}