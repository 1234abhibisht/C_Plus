#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter string : " << endl;
    cin >> str;
    int n = str.size();

    char target;
    cout << "Enter target character : " << endl;
    cin >> target;

    /* mapping */
    map<char, int> mpp;
    for (int i = 0; i <= n - 1; i++)
    {
        mpp[str[i]]++;
    }

    cout << target << " occurs " << mpp[target] << " times ";
    return 0;
}