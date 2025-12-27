// find element having frequency > n / 2, where n is number of elements

#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> arr, int n)
{
    int check = n / 2;
    for (int i = 0; i <= n - 1; i++)
    {
        int count = 0;
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > check)
        {
            return arr[i];
        }
    }
    return -1; // if no majority element
}
int main()
{
    vector<int> arr = {2, 3, 3, 3, 1, 2, 2};
    int size = arr.size();
    cout << majorityElement(arr, size);
    return 0;
}

// time complexity = O(n^2)
// space complexity = O(1)