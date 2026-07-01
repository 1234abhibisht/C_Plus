// we have given d

#include <bits/stdc++.h>
using namespace std;
void rotateArray(vector<int>&v, int d) {
    for(int k = 0; k <= d - 1; k++) {
        int temp = v[0];
        int i = 1;
        int j = 0;
        while(i <= v.size() - 1) {
            v[i - 1] = v[i];
            i++;
            j++;
        }
        v[j] = temp;
    }
    return;
}
int main()
{
    vector<int> v = {1,2,3,4,5};
    int d = 6; // given
    if(d > v.size()) {
        d = d % v.size();
    }
    rotateArray(v, d);
    for(auto it : v) {
        cout << it << " ";
    }
    return 0;
}
