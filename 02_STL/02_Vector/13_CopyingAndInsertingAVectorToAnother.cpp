#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    vector<int> copy(2, 10); /* copies {10,10} */
    v.insert(v.begin() + 1, copy.begin(), copy.end());
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}
