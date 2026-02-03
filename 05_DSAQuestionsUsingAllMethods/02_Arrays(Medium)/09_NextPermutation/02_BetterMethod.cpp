// We can use a STL next_permutation

#include <bits/stdc++.h>
using namespace std;
vector<int> nextPermu(vector<int> &v)
{
    next_permutation(v.begin(), v.end());
}
int main()
{
    vector<int> v = {2, 1, 5, 4, 3, 0, 0};
    nextPermu(v);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}