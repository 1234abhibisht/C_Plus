#include <bits/stdc++.h>
using namespace std;
bool checkCycleBFS(int starting, vector<vector<int>> adj, vector<int> &target) {
    queue<pair<int,int>> qu;
    qu.push({starting, -1});
    while(!qu.empty()) {
        int node = qu.front().first;
        int parent = qu.front().second;
        qu.pop();
        for(auto it : adj[node]) {
            if(target[it] != 1) {
                target[it] = 1;
                qu.push({it, node});
            }
            // if target[it] == 1, then it means two things, either 'it' is parent of 'node' or there is cycle
            // so if 'it' is parent of 'node', then no need to do anything just skip it
            else if(it != parent) {
                return true;
            }
        }
    }
    return false;
}
bool connectedComponents(int v, vector<vector<int>> adj) {  // this is the main function of algorithm that will also handle connected components
    vector<int> target(v);  // we have created target function here only and passed by reference
    for(int i = 0; i <= v - 1; i++) {  // for 0 based indexing, i = 0 to v - 1   for 1 based indexing, i = 1 to v
        if(target[i] != 1) {
            bool ans = checkCycleBFS(i, adj, target);
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

// Space Complexity = O(2n)