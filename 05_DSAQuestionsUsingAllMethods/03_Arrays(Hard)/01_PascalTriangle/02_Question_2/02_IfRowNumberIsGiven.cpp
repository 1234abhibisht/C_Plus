// now we are given RowNumber, we need to print whole array of that RowNumber

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ansRow;
    int rowNum = 6; // given
    int ans = 1;
    ansRow.emplace_back(ans);
    for (int i = 1; i <= rowNum - 1; i++)
    {
        ans = ans * (rowNum - i);
        ans = ans / i;
        ansRow.emplace_back(ans);
    }

    for (auto it : ansRow)
    {
        cout << it << " ";
    }
    return 0;
}