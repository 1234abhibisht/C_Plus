#include <iostream>
using namespace std;
void pattern(int n, int m) {
    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++) {
            if(i==1 || i==m || j==1 || j==n) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
}
int main() {
    int n,m;
    cout << "Enter length and breadth : ";
    cin >> n >> m;
    pattern(n,m);
    return 0;
}