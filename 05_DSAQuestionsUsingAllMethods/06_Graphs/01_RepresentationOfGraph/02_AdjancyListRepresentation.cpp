// for adjancy list, use vector 

#include <bits/stdc++.h>
using namespace std;
int main() {
    int nodes;
    cout << "Enter number of nodes : ";
    cin >> nodes;
    int edges;
    cout << "Enter number of edges : ";
    cin >> edges;
    vector<vector<int>> adj(nodes);   // for zero based indexing take size = nodes
                                     // for 1 based indexing take size = nodes + 1
    for(int i = 0; i <= edges - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    return 0;
}

// Space Complexity = O(2 * n), because each edge has 2 nodes, and each node is going 2 times in