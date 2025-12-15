#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    /* if we want to add two 5s after 2 */
    v.insert(v.begin() + 2, 2, 5);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}
