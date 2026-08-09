#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> arr = {1,2,3,4,5};  // checking whether 3 exists or not
  if(find(arr.begin(), arr.end(), 3) != arr.end()) {
    cout << "element exists"
  }
  return 0;
}
