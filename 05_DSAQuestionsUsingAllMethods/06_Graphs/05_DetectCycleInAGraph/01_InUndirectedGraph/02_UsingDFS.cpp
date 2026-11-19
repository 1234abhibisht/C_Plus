#include <bits/stdc++.h>
using namespace std;
bool checkCycleDFS(int starting, vector<vector<int>> adj, vector<int> &target, int parent) {
    target[starting] = 1;
    for(auto it : adj[starting]) {
        if(target[it] != 1) {
            bool ans = checkCycleDFS(it, adj, target, starting);
            if(ans == true) {
                return true;
            }
        }
        else if(parent != it) {
            return true;
        }
    }
    return false;
}
bool connectedComponents(int v, vector<vector<int>> adj) {  // this is the main funciton of algo, basically it handles for connected components also
    vector<int> target(v);
    for(int i = 0; i <= v - 1; i++) {
        if(target[i] != 1) {
            bool ans = checkCycleDFS(i, adj, target, -1);  // let parent of initial starting node be -1
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