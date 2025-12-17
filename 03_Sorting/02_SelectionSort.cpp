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
        int max = *max_element(arr.begin(), arr.begin() + 5);
        int idx = -1;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < max)
            {
                max = arr[j];
                idx = j;
            }
        }
        swap(arr[idx], arr[i]);
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
