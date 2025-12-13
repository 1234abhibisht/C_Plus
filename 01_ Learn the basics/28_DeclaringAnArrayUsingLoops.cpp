#include <iostream>
using namespace std;
int main() {
    int arr[5];
/* cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4]; 
   cout << arr[0] << arr[1] << arr[2] 
   till now we were declaring an array like this,
   but the best method is doing it by loops */

    for(int i=0; i<=4; i++) {  /* here i is index */
        cin >> arr[i];
        cout << arr[i] << endl;
    }
    return 0;
}