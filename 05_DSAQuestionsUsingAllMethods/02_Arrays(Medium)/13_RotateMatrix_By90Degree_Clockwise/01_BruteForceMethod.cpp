// a n * n matrix is given

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
    // create a new matrix of n * n, and place answers to it according to pattern

    int ansArr[n][n];
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            ansArr[j][n - 1 - i] = arr[i][j];
        }
    }

    // output
    cout << "\n";
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << ansArr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// Time Complexity = O(n^2)
// Space Complexity = O(n^2)