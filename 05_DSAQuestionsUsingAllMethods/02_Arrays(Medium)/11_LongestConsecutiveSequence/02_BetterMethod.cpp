#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {100, 102, 100, 101, 4, 3, 2, 3, 2, 1, 1, 1, 2};
    int n = v.size();
    sort(v.begin(), v.end());
    int previous = v[0], count = 1, longest = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        if (v[i] - 1 == previous)
        {
            count++;
            previous = v[i];
        }
        // if(v[i] == previous) means v[i] = 1 and previous = 1, no need to do anything
        // just further itrate

        else if (v[i] != previous)
        {
            previous = v[i];
            count = 1;
        }
        longest = max(longest, count);
    }
    cout << longest;
    return 0;
}

// Time Complexity = O(log n) + O(n) = O(n + log n)
// Space Complexity = O(1)