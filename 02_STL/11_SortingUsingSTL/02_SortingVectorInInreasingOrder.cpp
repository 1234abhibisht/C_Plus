#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {5, 4, 2, 1, 3};
    sort(v.begin(), v.begin() + 5);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}
