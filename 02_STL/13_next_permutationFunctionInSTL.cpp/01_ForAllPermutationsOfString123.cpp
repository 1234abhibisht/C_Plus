/* If we have string "123" and we want all the permutations of this string e.g. (213, 321, etc),
we use next_permutations() function */

/* always sort the string first */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "123";
    sort(s.begin(), s.end());  /* s.end() = s.begin() + 3 */
    while (next_permutation(s.begin(), s.begin() + 3))
    {
        cout << s << endl;
    }
    return 0;
}
