// we are given rowIndex, we need to print whole array of that rowIndex in pascal triangle

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rowIndex = 5; // given
    vector<int> ansRow;
    long long ans = 1;  // to protect from overflow
    ansRow.emplace_back(ans);
    for (int i = 0; i <= rowIndex - 1; i++)
    {
        ans = ans * (rowIndex - i);
        ans = ans / (i + 1);
        ansRow.emplace_back(ans);
    }

    for (auto it : ansRow)
    {
        cout << it << " ";
    }
    return 0;
}

// Time Complexity = O(rowIndex)
// Space Complexity = O(1)