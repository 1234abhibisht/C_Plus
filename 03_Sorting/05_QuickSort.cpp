/* time complexity(best and average) = 0(n * log n) */
/* time complexity (worst case) = O(n^2), when we take greatest or least element as pivot */

#include <bits/stdc++.h>
using namespace std;
int pivot(vector<int> &arr, int minIdx, int maxIdx)
{
    int pivotPoint = arr[minIdx];
    int i = minIdx;
    int j = maxIdx;
    while (i < j)
    {
        while (pivotPoint >= arr[i] && i <= maxIdx - 1)
        {
            i++;
        }
        while (pivotPoint < arr[i] && j >= minIdx + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
        /* swap arr[j] with pivot */
        swap(arr[j], arr[minIdx]); /* as pivotPoint = arr[minIdx] */
    }
    return j;
}
vector<int> quickSort(vector<int> &arr, int minIdx, int maxIdx)
{
    if (minIdx < maxIdx)
    { /* we will do sorting only if we have array of more than one element */
        int pivotIdx = pivot(arr, minIdx, maxIdx);
        quickSort(arr, minIdx, pivotIdx - 1);
        quickSort(arr, pivotIdx + 1, maxIdx);
    }
    return arr;
}
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}