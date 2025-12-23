// elements are from 1 to n

#include <bits/stdc++.h>
using namespace std;
int missingElement(vector<int> &arr, int n)
{
    int miss = 0;
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j <= n - 2; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            miss = i;
            break;
        }
    }
    return miss;
}
int main()
{
    vector<int> arr = {1, 2, 3, 5};
    int n = 5;
    int size = arr.size();
    cout << missingElement(arr, n);
    return 0;
}

// time complexity = O(n * (n - 1)) = O(n^2 - n) = O(n^2), in worst case
// worst case will happen if missing element is n, so outer loop has to itrate till n
// space complexity = O(1)