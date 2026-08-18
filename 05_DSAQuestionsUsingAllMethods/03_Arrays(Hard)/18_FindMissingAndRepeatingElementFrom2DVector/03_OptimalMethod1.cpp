// using mathematics summation

#include <bits/stdc++.h>
using namespace std;
vector<int> missingRepeating(vector<vector<int>> arr) {
    int n = arr[0].size();
    long long repeating, missing = 0;
    long long sN1 = 0, sN2 = 0, s1 = 0, s2 = 0;
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= n - 1; j++) {
            s1 += arr[i][j];
            s2 += (long long)arr[i][j] * (long long)arr[i][j];  // typecasting before multiplying to prevent overflow
        }
    }
    sN1 = ((n * n) * ((n * n) + 1)) / 2;
    sN2 = ((n * n) * ((n * n) + 1) * ((2 * (n * n) + 1))) / 6;
    long long val1 = s1 - sN1;
    long long val2 = s2 - sN2;
    val2 = val2 / val1;
    repeating = (val1 + val2) / 2;
    missing = repeating - val1;
    return {int(repeating), int(missing)};
}
int main()
{
    vector<vector<int>> arr = {{9,1,7},{8,9,2},{3,4,6}};
    for(auto it : missingRepeating(arr)) {
        cout << it << " ";
    }
    return 0;
}

// Time Complexity - O(n ^ 2)
// Space Complexity - O(1)

// but this method can lead to integer overflow, due to sum of squares