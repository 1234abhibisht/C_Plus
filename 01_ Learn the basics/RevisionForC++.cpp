#include <iostream>
using namespace std;
void secondgreat(int n, int arr[]) {
    int great=arr[0];
    int great2=0;
    for(int i=1; i<=n-1; i++) {
        if(arr[i]>great) {
            great2=great;
            great=arr[i];
        }
        else if(arr[i]>great2 && arr[i]!=great) {
            great2=arr[i];
        }
        cout << "Second greatest number is : " << great2;
    }
}
int main() {
    int n;
    cout << "Enter length of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter your numbers : ";
    for(int i=0; i<=n-1; i++) {
        cin >> arr[i];
    }
    secondgreat(n,arr);
    return 0;
}