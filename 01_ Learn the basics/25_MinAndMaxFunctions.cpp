/* min and max are inbuilt functions to find minimum and maximum of two or more numbers */
#include <iostream>
using namespace std;
/* for minimum */
int main() {
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    int minimum=min(a,b);
    cout << "Minimum of " << a << " and " << b << " is " << minimum;
/* for maximum */
int x, y;
cout << "Enter two numbers : ";
cin >> x >> y;
int maximum=max(x,y);
cout << "Maximum of " << x << " and " << y << " is " << maximum;
    return 0;
}