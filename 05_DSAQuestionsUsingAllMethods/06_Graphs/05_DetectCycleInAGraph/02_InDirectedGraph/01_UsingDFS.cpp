#include <bits/stdc++.h>
using namespace std;
bool checkCycleDFS(int node, vector<vector<int>> adj, vector<int> &visited, vector<int> &visitedPath, int parent) {
    visited[node] = 1;
    visitedPath[node] = 1;
    for(auto it : adj[node]) {
        if(visited[it] != 1) {
            bool ans = checkCycleDFS(it, adj, visited, visitedPath, node);
            if(ans == true) {
                return true;
            }
        }
        else if(it != parent && visitedPath[it] == 1) {
            return true;
        }
    }
    visitedPath[node] = 0;
    return false;
}
bool connectedComponents(int v, vector<vector<int>> adj) {
    vector<int> visited(v);
    vector<int> visitedPath(v);
    int starting = 0;
    for(int i = starting; i <= v - 1; i++) {
        if(visited[i] != 1) {
            bool ans = checkCycleDFS(i, adj, visited, visitedPath, -1);
            if(ans == true) {
                return true;
            }
        }
    }
    return false;
}
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
    bool ans = connectedComponents(nodes, adj);
    cout << ans;
    return 0;
}

// Time Complexity = O(n) + O(2E) + O(n){using for loop for the connected components, in connectedComponents function}
//                                  why + O(n), not * O(n), because for each node we are traversing only one component not all the components

// Space Complexity = O(n){call stack} + O(n){visited vector} + O(n){visitedPath vector}