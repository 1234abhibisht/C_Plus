#include <iostream>
using namespace std;
int main()
{
    pair<int, pair<int, int>> b = {1, {3, 4}};
    cout << b.first << " " << b.second.first << " " << b.second.second;
    return 0;
}