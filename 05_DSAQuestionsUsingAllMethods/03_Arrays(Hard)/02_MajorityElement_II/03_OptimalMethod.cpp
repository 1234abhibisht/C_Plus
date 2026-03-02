// almost same as majority element I

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 1, 2, 2, 3, 3, 3};
    int n = v.size();
    vector<int> ans;
    int ele = INT_MIN;
    int count = 0;
    for(int i = 0; i <= n - 1; i++) {
        if(count == 0) {
            ele = v[i];
            count = 1;
        }
        else if(v[i] == ele) {
            count++;
        }
        else if(v[i] != ele) {
            count--;
        }
    }
    
    return 0;
}