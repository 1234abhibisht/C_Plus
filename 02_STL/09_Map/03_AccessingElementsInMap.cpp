#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* if only one key and one value */
    map<int, int> mpp1;
    mpp1[1] = 2; /* key 1 has assigned value 2 {1,2} */
    mpp1[3] = 3; /* key 3 has assigned value 3 {3,3} */

    cout << mpp1[1] << " "; /* gives value of key 1 = 2 */
    cout << mpp1[3];        /* 3 */

    return 0;
}