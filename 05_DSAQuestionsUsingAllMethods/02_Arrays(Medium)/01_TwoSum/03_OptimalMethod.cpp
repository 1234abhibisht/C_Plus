// return indexes of numbers having sum equal to target

#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> arr, int n, int target)
{

    // we will use two pointer algorithm, but in sorted array
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum > target)
        {
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            return {i, j};
        }
    }
    return {0, 0};
}
int main()
{
    vector<int> arr = {2, 6, 5, 8, 1};
    int size = arr.size();
    for (auto it : twoSum(arr, size, 14))
    {
        cout << it << " ";
    }
    return 0;
}
