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
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= m - 1; j++) {
            if(arr[i][j] == 0) {
                // for row
                for(int k = 0; k <= m - 1; k++) {
                    if(arr[i][k] != 0) {
                        arr[i][k] = -1;
                    }
                }
                // for column
                for(int k = 0; k <= n - 1; k++) {
                    if(arr[k][j] != 0) {
                        arr[k][j] = -1;
                    }
                }
            } 
        }
    }
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= m - 1; j++) {
            if(arr[i][j] == -1) {
                arr[i][j] = 0;
            }
        }
    }

    // print updated matrix
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= m - 1; j++) {
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}

// Time Complexity = O(n * m) * (n + m) + O(n * m)
// If n = m, time complexity will be in order of n^3

// Space Complexity = O(1)