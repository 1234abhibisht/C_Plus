// Generally graphs are repsented by adjancy list (even in real life graphs)

#include <bits/stdc++.h>
using namespace std;
void traverse(int node, vector<vector<int>> adj, vector<int> ans, vector<int> &track) {

    ans.emplace_back(node);
    track[node] = 1;
    for(auto it : adj[node]) {
        if(track[it] != 1) {
            traverse(it, adj, ans, track);
        }
    }
}
vector<int> DFS(int v, vector<vector<int>> adj) {  // so basically in problems(leetcode), we will be given v = number of nodes
                                                    // and vector<vector<int>> adj -> adjancy list representation of graph
    vector<int> ans;
    vector<int> track(v);  // to track visited nodes, and (v) for 0 based indexing graph
    int starting = 0;   // let starting node is (0), for 0 based indexing
    traverse(starting, adj, ans, track); 
    return ans;
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

    vector<int> ans = DFS(nodes, adj);
    for(auto it : ans) {
        cout << it << " ";
    }
    return 0;
}

// Time Complexity = O(n) + O(2E)
// Space Complexity = O(n){for vector track} + O(n){for recursion call stack} = O(2n)