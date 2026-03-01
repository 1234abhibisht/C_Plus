// we need to print whole pascal triangle
// output -> [[1], [1,1], [1,2,1], [1,3,3,1], [1,4,6,4,1]]
// we need to return nested vector or list
// we are given number of rows

#include <bits/stdc++.h>
using namespace std;
vector<int> returnRow(int row)
{
    vector<int> ansRow;
    long long ans = 1;
    ansRow.emplace_back(ans);
    for (int i = 1; i <= row - 1; i++)
    {
        ans = ans * (row - i);
        ans = ans / i;
    }
    return ansRow;
}
int main()
{
    int numRows = 6; // given
    vector<vector<int>> mainAns;
    for (int i = 1; i <= numRows; i++)
    {
        mainAns.emplace_back(returnRow(i));
    }

    // print mainAns vector
    // return 0;
}

// Time Complexity = O(n ^ 2), as we are calling returnRow function from a loop inside main function
// Space Complexity = O(1), if we exclude vector used for answer