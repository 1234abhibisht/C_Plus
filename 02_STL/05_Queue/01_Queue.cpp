#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);

    cout << qu.front(); /* 1 */
    cout << "\n";
    cout << qu.back(); /* 4 */

    qu.front() += 3; /* 1 = 1 + 3 = 4*/

    qu.pop();  /* deletes 1 */
    return 0;
}
