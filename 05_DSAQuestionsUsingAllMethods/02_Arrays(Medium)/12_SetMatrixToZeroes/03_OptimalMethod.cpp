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

    // marking arrRow and arrColumn which are inside matrix only
    int row0 = 1;
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= m - 1; j++) {
            if(arr[i][j] == 0) {
                arr[i][0] = 0;
                if(j != 0) {
                    arr[0][j] = 0;
                }
                else {
                    row0 = 0;
                }
            }
        }
    }

    // converting remaining 1's if they follow rule
    for(int i = 1; i <= n - 1; i++) {
        for(int j = 1; j <= m - 1; j++) {
            if(arr[i][j] != 0) {
                if(arr[0][j] == 0 || arr[i][0] == 0) {
                    arr[i][j] = 0;
                }
            }
        }
    }


    // now converting elements of arrRow and arrColumn
    if(arr[0][0] == 0) {
        for(int i = 1; i <= m - 1; i++) {
            arr[0][i] = 0;
        }
    }
    if(row0 == 0) {
        for(int i = 0; i <= n - 1; i++) {
            arr[i][0] = 0;
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

// Time Complexity = O(n^2)
// Space Complexity = O(1)