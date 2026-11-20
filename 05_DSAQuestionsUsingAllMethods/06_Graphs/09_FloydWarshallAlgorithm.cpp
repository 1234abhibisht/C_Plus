// We use adjancy matrix for floyd warshall algorithm

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> floydWarshall(int v, vector<vector<int>> &distMatrix) {
    for(int i = 0; i <= v - 1; i++) {
        for(int j = 0; j <= v - 1; j++) {
            if(distMatrix[i][j] == -1) {
                distMatrix[i][j] = 1e9;
            }
            if(i == j) {  
                distMatrix[i][j] = 0;  // as weight from a node to that node only is 0
            }
        }
    }

    // main algorithm
    for(int via = 0; via <= v - 1; via++) {
        for(int i = 0; i <= v - 1; i++) {
            for(int j = 0; j <= v - 1; j++) {
                distMatrix[i][j] = min(distMatrix[i][j], distMatrix[i][via] + distMatrix[via][j]);
            }
        }
    }

    // negative cycle detect
    for(int i = 0; i <= v - 1; i++) {
        if(distMatrix[i][i] < 0) {
            // negative cycle exists

        }
    }


    for(int i = 0; i <= v - 1; i++) {
        for(int j = 0; j <= v - 1; j++) {
            if(distMatrix[i][j] == 1e9) {
                distMatrix[i][j] = -1;
            }
        }
    }    
}
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
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = w;
        adj[v][u] = w;  // as for undirected graph, there is edge direction to both sides
        
        // for directed graph, if direction is from u to v just do adj[u][v] = w, dont need to do adj[v][u] = -1 or 1e9
    }
    return 0;
}

// Time Complexity = O(n ^ 3), where n is number of nodes
// Space Complexity = O(n ^ 2)