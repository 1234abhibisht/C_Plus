// for inputs
// first take input of n = number of nodes and m = number of edges
// then take inputs of nodes between which we want edes

#include <bits/stdc++.h>
using namespace std;
int main() {
    int nodes;
    cout << "Enter number of nodes : ";
    cin >> nodes;
    int edges;
    cout << "Enter number of edges : ";
    cin >> edges;
    vector<vector<int>> adj(nodes, vector<int>(nodes, 0));  // for zero based indexing take size = nodes
                                                            // for 1 based indexing take size nodes + 1
    for(int i = 0; i <= edges - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;  // as for undirected graph, there is edge direction to both sides
        
        // for directed graph, if direction is from u to v just do adj[u][v] = 1, dont need to do adj[v][u] = 1
    }
    return 0;
}


// Space Complexity = O(n ^ 2)