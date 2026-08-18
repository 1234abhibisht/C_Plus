// using xor
// here we are using 1d vector, instead of 2d for easy calculations
// but algorithm will be same for 2d vector too

#include <bits/stdc++.h>
using namespace std;
vector<int> missingRepeating(vector<int> &arr) {
    int n = arr.size();
    int xor1 = 0, xor2 = 0;
    for(int i = 0; i <= n - 1; i++) {
        xor1 = xor1 ^ arr[i];
        xor2 = xor2 ^ (i + 1);
    }
    int num = xor1 ^ xor2;
    int bitNo = 0;
    while(1) {
        if((num & (1 << bitNo)) != 0) {
            break;
        }
        bitNo++;
    }
    int zero = 0, one = 0;
    // putting elements of arr to zero or one club
    for(int i = 0; i <= n - 1; i++) {
        if((arr[i] & (1 << bitNo)) != 0) {  // part of one club
            one = one ^ arr[i];
        }
        else {  // part of zero club
            zero = zero ^ arr[i];
        }
    }
    // putting elements from 1 to n to zero or one club
    for(int i = 1; i <= n; i++) {
        if((i & (1 << bitNo)) != 0) {
            one = one ^ i;
        }
        else {
            zero = zero ^ i;
        }
    }
    // checking element
    int count = 0;
    for(int i = 0; i <= n - 1; i++) {
        if(arr[i] == zero) {
            count++;
        }
    }
    if(count == 2) {
        return {zero, one};
    }
    return {one, zero};
}
int main()
{
    vector<int> arr = {4,3,6,2,1,1};
    for(auto it : missingRepeating(arr)) {
        cout << it << " ";
    }
    return 0;
}