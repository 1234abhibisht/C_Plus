// using Dutch National Flag algorithm

#include <bits/stdc++.h>
using namespace std;
vector<int> sort_0_1_2(vector<int> &arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {1, 0, 0, 2, 1, 0, 1, 2, 0};
    int size = arr.size();
    for (auto it : sort_0_1_2(arr, size))
    {
        cout << it << " ";
    }
    return 0;
}

// time complexity = 0(n), worst case if whole array is unsorted
// space complexity = O(1)