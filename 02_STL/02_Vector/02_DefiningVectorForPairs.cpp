#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    v.emplace_back(1, 2);
    v.push_back({1, 2});
    return 0;
}