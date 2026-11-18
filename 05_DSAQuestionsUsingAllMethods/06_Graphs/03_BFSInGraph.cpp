// Generally graphs are repsented by adjancy list (even in real life graphs)

#include <bits/stdc++.h>
using namespace std;
vector<int> BFS(int v, vector<vector<int>> adj) {  // so basically in problems(leetcode), we will be given v = number of nodes
                                                    // and vector<vector<int>> adj -> adjancy list representation of graph
    vector<int> ans;
    vector<int> track(v);  // to track visited nodes, and (v) for 0 based indexing graph
    queue<int> qu;
    qu.push(0);  
    track[0] = 1;
    while(!qu.empty()) {
        int node = qu.front();
        qu.pop();
        ans.emplace_back(node);
        // now check for neighbours of qu.front()
        for(auto it : adj[node]) {
            if(track[it] != 1) {
                qu.push(it);
                track[it] = 1;
            }
        }
    }
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

    vector<int> ans = BFS(nodes, adj);
    for(auto it : ans) {
        cout << it << " ";
    }
    return 0;
}

// Time Complexity = O(n) + O(2E)
// Space Complexity = O(n){for queue} + O(n){for vector track} = O(2n)