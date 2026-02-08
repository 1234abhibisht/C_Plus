#include <bits/stdc++.h>
using namespace std;
int main()
{
    int longest = 1;
    vector<int> v = {100, 102, 100, 101, 4, 3, 2, 3, 2, 1, 1, 1, 2};
    int n = v.size();
    unordered_set<int> st;
    for (int i = 0; i <= n - 1; i++)
    {
        st.insert(v[i]);
    }
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                count++;
                x++;
            }
            longest = max(longest, count);
        }
    }
    cout << longest;
    return 0;
}

// Time Complexity = O(n) worst case of set + O(2n) to itrate in set = O(3n)
// Space Complexity = O(n)

// If there are collisions and set has worst case, then in that case, Better Method is better to use
