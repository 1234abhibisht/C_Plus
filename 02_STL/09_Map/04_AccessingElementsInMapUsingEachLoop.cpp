#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* if only one key and one value */
    map<int, int> mpp1;
    mpp1[1] = 2; /* key 1 has assigned value 2 {1,2} */
    mpp1[3] = 3; /* key 3 has assigned value 3 {3,3} */
    mpp1[4] = 6;
    for (auto it : mpp1)
    {
        cout << it.second << " "; /* it will give all values of each key */
    }
    return 0;
}