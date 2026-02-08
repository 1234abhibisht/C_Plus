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
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= m - 1; j++) {
            cin >> arr[i][j];
        }
    }

    // algorithm
    vector<int> arrColumn(m);
    vector<int> arrRow(n);
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= m - 1; j++) {
            if(arr[i][j] == 0) {
                arrColumn[j] = 1;
                arrRow[i] = 1;
            }
        }
    }
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= m - 1; j++) {
            if(arr[i][j] != 0) {
                if(arrColumn[j] == 1 || arrRow[i] == 1) {
                    arr[i][j] = 0;
                }
            }
        }
    }

    // output
    cout << "\n";
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= m - 1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// Time Complexity = O(n * m) + O(n * m)
// If n = m, T.C = O(n^2)

// Space Complexity = O(n) + O(m)
// if n = m, S.C = O(2n)