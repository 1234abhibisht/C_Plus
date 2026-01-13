/* time complexity(average and worst case) = O(n^2)
   (best case) = 0(n) */
/* Bubble sort is stable */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    for (int i = 0; i <= n - 1; i++)
    {
        bool check = false;
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                check = true;
            }
        }
        if (check == false)
        {
            break;
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
