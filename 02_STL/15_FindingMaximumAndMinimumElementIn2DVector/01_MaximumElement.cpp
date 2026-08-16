#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr = {
        {3, 7, 2},
        {9, 1, 5},
        {4, 8, 6}
    };
    int maximum = INT_MIN;
    for(auto it : arr) {
        maximum = max(maximum, *max_element(it.begin(), it.end()));
    }
    cout << maximum;
    return 0;
}
