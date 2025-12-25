// return indexes of numbers having sum equal to target

#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> arr, int n, int target)
{ // return two numbers

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return {i, j};
            }
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