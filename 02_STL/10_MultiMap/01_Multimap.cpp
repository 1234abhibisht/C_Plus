/* it is same as map, but we can store multiples keys, means different values for same keys */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int, int> mpp;
    mpp.insert({1, 2}); /* key 1 has value 2 */
    mpp.insert({1, 3}); /* key 1 also has value 3 */

    for (auto it : mpp)
    {
        cout << it.second << " ";
    }
    return 0;
}
