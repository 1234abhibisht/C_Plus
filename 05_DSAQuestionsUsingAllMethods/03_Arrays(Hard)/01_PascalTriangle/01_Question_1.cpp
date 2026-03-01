// we are given a row and a column, (2,3), we need to find element at that row and column in a pascal
// triangle

// for this use formula -> row - 1 C column - 1 -> r-1 C c-1

#include <bits/stdc++.h>
using namespace std;
int nCr(int r, int c)
{
    // here r = n and c = r for n C r
    int res = 1;
    for (int i = 0; i <= c - 1; i++)
    {
        res = res * (r - i);
        res = res / (i + 1);
    }
    return res;
}
int main()
{
    int r; // given
    int c; // given
    cout << nCr(r - 1, c - 1);
    return 0;
}

// Time Complexity = O(r)
// Space Complexity = O(1)