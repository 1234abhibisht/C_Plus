// we are given an array with equal number of positive and negative elements,
// if size of array is n, then positive elements are n/2 and negative elements are n/2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {3, 1, -2, -5, 2, -4};
    int n = v.size();
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i <= n - 1; i++)
    {
        if (v[i] > 0)
        {
            pos.emplace_back(v[i]);
        }
        else
        {
            neg.emplace_back(v[i]);
        }
    }
    for (int i = 0; i <= n / 2 - 1; i++)
    {
        v[2 * i] = pos[i];
        v[2 * i + 1] = neg[i];
    }
    for(auto it : v) {
        cout << it << " ";
    }
    return 0;
}

// Time Complexity = O(n) + O(n / 2) = O(3n / 2)

// Space Complexity = O(n / 2) + O(n / 2) = O(n)
// first one is for pos array and second one is for neg array