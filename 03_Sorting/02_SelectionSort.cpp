/* time complexity(best, average and worst case) = O(n^2) */
/* Selection sort is unstable */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();
    for (int i = 0; i <= n - 2; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[minIdx)
            {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
