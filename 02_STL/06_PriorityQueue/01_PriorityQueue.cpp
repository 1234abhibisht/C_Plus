#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(3);
    pq.push(2);
    pq.push(7);

    cout << pq.top() << " "; /* 7 */
    pq.pop();                /* removes 7 */
    cout << pq.top();        /* 5 */
    return 0;
}
