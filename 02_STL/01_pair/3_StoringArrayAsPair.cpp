#include <iostream>
using namespace std;
int main()
{
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[0].first << " " << arr[2].second;
    return 0;
}