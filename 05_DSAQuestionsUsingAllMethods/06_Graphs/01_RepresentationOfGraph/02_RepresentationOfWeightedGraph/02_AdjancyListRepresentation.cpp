#include <bits/stdc++.h>
using namespace std;
int main() {
    int nodes;
    cout << "Enter number of nodes : ";
    cin >> nodes;
    int edges;
    cout << "Enter number of edges : ";
    cin >> edges;
    vector<vector<pair<int, int>>> adj(nodes);
    for(int i = 0; i <= edges - 1; i++) {
        int u, v;
        int weight;   // in inner vector, put pair of neighbouring node and weight
        adj[u].push_back({v, weight});
        adj[v].push_back({v, weight});
    }
    return 0;
}