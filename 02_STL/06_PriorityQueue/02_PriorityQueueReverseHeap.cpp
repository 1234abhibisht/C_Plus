/* by default priority queue stores large elements in top, but we can make priority queue to
   store small elements at top */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(3);
    pq.push(2);
    pq.push(7);

    cout << pq.top() << " "; /* 2 */
    pq.pop();                /* removes 2 */
    cout << pq.top();        /* 3 */
    return 0;
}
