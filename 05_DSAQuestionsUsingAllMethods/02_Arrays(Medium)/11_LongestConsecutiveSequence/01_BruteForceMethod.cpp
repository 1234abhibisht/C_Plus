#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    int n = v.size();
    int longest = 1;
    for(int i = 0; i <= n - 1; i++) {
        int count = 1;
        for(int j = 0; j <= n - 1; j++) {
            if(v[j] == v[i] + 1) {
                count++;
            }
        }
        longest = max(longest, count);
    }
    return 0;
}