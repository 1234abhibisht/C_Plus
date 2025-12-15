#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* if only one key and one value */
    map<int,int> mpp1;
    mpp1[1] = 2;  /* key 1 has assigned value 2 {1,2} */
    mpp1[3] = 3;  /* key 3 has assigned value 3 {3,3} */

    /* if two keys and one value */
    map<pair<int,int>,int> mpp2;
    mpp2[{1,2}] = 3;  /* key {1,2} has assigned value 3 {{1,2},3} */
    
    return 0;
}
