#include <iostream>
using namespace std;
void arrdeclare(int arr[], int n) {
    for(int i=0; i<=n; i++) {
        cin >> arr[i];
        cout << arr[i] << endl;
    }
}
int main() {
    int n=5;
    int arr[n];
    arrdeclare(arr, n);
    return 0;
}