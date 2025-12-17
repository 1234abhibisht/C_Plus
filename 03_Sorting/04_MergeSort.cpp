/* time complexity(average and worst case) = O(n * log base 2 n) */
/* Space compelxity = 0(n)*/

#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int minIdx, int midIdx, int maxIdx)
{
    int left = minIdx;
    int right = maxIdx + 1;
    vector<int> temp;
    while (left <= midIdx && right <= maxIdx)
    {
        if (arr[left] <= arr[right])
        {
            temp.emplace_back(arr[left]);
            left++;
        }
        else if (arr[left] >= arr[right])
        {
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while (left <= midIdx)
    {
        temp.emplace_back(arr[left]);
        left++;
    }
    while (right <= maxIdx)
    {
        temp.emplace_back(arr[right]);
        right++;
    }

    /* transfer value of temp to arr */
    for (int i = 0; i <= maxIdx; i++)
    {
        arr[i - minIdx] = temp[i];
    }
    return;
}
void divide(vector<int> &arr, int minIdx, int maxIdx)
{
    if (minIdx == maxIdx) /* base case */
    {
        return;
    }
    int midIdx = (minIdx + maxIdx) / 2;
    divide(arr, minIdx, midIdx);
    divide(arr, midIdx + 1, maxIdx);
    merge(arr, minIdx, midIdx, maxIdx);
    return;
}
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();
    divide(arr, 0, n - 1);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}