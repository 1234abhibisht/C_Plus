/* given an integer array and a target number from user, find how many times the target number
    appears in array */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter string" << endl;
    cin >> str;
    int n = str.size(); /* size of string */

    char target;
    cout << "Enter target character : ";
    cin >> target;

    /* create an integer array named hasharr having size 26 and initialize each element with 0 */
    int hasharr[26] = {0};

    /* precomputing */
    for (int i = 0; i <= n - 1; i++)
    {
        hasharr[str[i] - 'a']++; /* there will be typecasting, as hasharr integer array */
    }

    cout << target << " appears " << hasharr[target - 'a'] << " times" << endl;
    return 0;
}