#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows & columns : ";
    cin >> n;
    int arr[n][n];
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    // algorithm

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // reverse each row
    for (int i = 0; i <= n - 1; i++)
    {
        int x = 0;
        int y = n - 1;
        while (x < y)
        {
            swap(arr[i][x], arr[i][y]);
            x++;
            y--;
        }
    }

    // output
    cout << "\n";
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// Time Complexity = O(n^2) + O(n), O(n) for reversing each row
// Space Complexity = O(1)