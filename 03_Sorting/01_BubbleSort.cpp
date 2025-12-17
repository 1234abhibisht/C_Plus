#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();
    bool check = false;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                check = true;
            }
        }
        if (check == false)
        {
            break;
        }
    }

    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}