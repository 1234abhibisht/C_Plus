#include <iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,5};
    arr[0]+=5;
    cout << arr[0] << endl;
    arr[3]+=2;
    cout << arr[3] << endl;
    arr[4]*=3;
    cout << arr[4];
    return 0;
}