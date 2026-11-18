#include <bits/stdc++.h>
using namespace std;
int main() {
    int nodes;
    cout << "Enter number of nodes : ";
    cin >> nodes;
    int edges;
    cout << "Enter number of edges : ";
    cin >> edges;
    vector<vector<int>> adj(nodes, vector<int>(nodes, 0));
    for(int i = 0; i <= edges - 1; i++) {
        int u, v;
        int weight;  // in matrix, instead of 1 put the weight of the edge that will connect u and v nodes
        adj[u][v] = weight;
        adj[v][u] = weight;
    }
    return 0;
}