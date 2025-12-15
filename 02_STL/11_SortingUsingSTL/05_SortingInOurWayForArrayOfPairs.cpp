#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    if (p1.second > p2.second)
    {
        return false;
    }
    if (p1.first == p1.second)
    {
        if (p1.first > p1.second)
        {
            true;
        }
        if (p1.first < p1.second)
        {
            return false;
        }
    }
}

int main()
{
    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    // sort this pair array in terms of second element in ascending order
    // if second element is same, sort this in terms of first element in descending order

    sort(arr, arr + 5, comp); /* comp is comperetor function */

    /* out -> {{4,1}, {2,1}, {1,2}} */
    return 0;
}