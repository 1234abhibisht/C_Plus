// here we are not given that positive elements are equl to negative ones.
// positive elements can be greater than negative elements or lesser than negative elements
// so in this method we can't use optimal method of previous question, we need to use brute force method
// it is give than array is of even size

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {3, 1, -2, -5, 2, 4};
    int n = v.size();
    vector<int> pos;
    vector<int> neg;

    for(int i = 0; i <= n - 1; i++) {
        if(v[i] > 0) {
            pos.emplace_back(v[i]);
        }
        else {
            neg.emplace_back(v[i]);
        }
    }

    if(pos.size() > neg.size()) {
        for(int i = 0; i <= neg.size() - 1; i++) {
            v[2 * i] = pos[i];
            v[2 * i + 1] = neg[i];
        }
        int idx = 2 * neg.size();
        for(int i = neg.size(); i <= pos.size() - 1; i++) {
            v[idx] = pos[i];
            idx++;
        }
    }
    else {  // posSize < negSize
        for(int i = 0; i <= pos.size() - 1; i++) {
            v[2 * i] = pos[i];
            v[2 * i + 1] = neg[i];
        }
        int idx = 2 * pos.size();
        for(int i = pos.size(); i <= neg.size() - 1; i++) {
            v[idx] = pos[i];
            idx++;
        }
    }

    for(auto it : v) {
        cout << it << " ";
    }
    return 0;
}