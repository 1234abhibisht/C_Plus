/* time complexity(average and worst case) = O(n^2) 
   (best case) = 0(n) */
 /* Insertion sort is stable */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();

    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j >= 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
