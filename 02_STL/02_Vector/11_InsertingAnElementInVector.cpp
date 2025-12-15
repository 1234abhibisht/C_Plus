#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    /* if we want to insert 5 at beginning */
    // v.insert(v.begin(), 5);
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    // cout << "\n";

    /* if we want to add 6 after 2 */
    v.insert(v.begin() + 2, 6);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}
