#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    int m;
    cout << "Enter number of columns : ";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    // algorithm
    int minRow = 0, maxRow = n - 1, minColumn = 0, maxColumn = m - 1;
    int count = 0, totalElements = n * m;
    while (minColumn <= maxColumn && minRow <= maxRow)
    {
        for (int i = minColumn; i <= maxColumn; i++)
        {
            cout << arr[minRow][i] << " ";
            count++;
        }
        minRow++;
        if (count >= totalElements)
        {
            break;
        }
        for (int i = minRow; i <= maxRow; i++)
        {
            cout << arr[i][maxColumn] << " ";
            count++;
        }
        maxColumn--;
        if (count >= totalElements)
        {
            break;
        }
        for (int i = maxColumn; i >= minColumn; i--)
        {
            cout << arr[maxRow][i] << " ";
            count++;
        }
        maxRow--;
        if (count >= totalElements)
        {
            break;
        }
        for (int i = maxRow; i >= minRow; i--)
        {
            cout << arr[i][minColumn] << " ";
            count++;
        }
        minColumn++;
        if (count >= totalElements)
        {
            break;
        }
    }
    return 0;
}
