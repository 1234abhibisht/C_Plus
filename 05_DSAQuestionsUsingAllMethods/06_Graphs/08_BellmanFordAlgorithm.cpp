// in bellman ford, we do relaxation of edges v - 1 times, so we dont need any priority queue to implement it
// we can perform relaxation on the distance vector only

// in bellman ford, people generally uses edge list instead of adjancy list
// means instead of vector<vector<pair<int,int>>> adj, use vector<vector<int>>
// so instead of {{1,5},{2,10}, ---}, use {(1,2,3), (4,5,6)} where first element if u second is v and third is weight
// because bellman ford doesnt jump to the neighbours of the current node, it simply loops over all the edges in a graph in any order

#include <bits/stdc++.h>
using namespace std;
vector<int> bellmanFord(int v, vector<vector<int>> edge, int source) {  // we are given number of nodes, adjancy list and source node
    vector<int> distance(v, 1e9);
    distance[source] = 0;
    for(int i = 0; i <= v - 1; i++) {  // perform relaxation v - 1 times
        for(auto it : edge) {
            int node = it[0];
            int adjNode = it[1];
            int edgeWeight= it[2];
            if(distance[node] != 1e9 && distance[node] + edgeWeight < distance[adjNode]) {
                distance[adjNode] = distance[node] + edgeWeight;
            }
        }
    }

    // last relaxation (or n th relaxation) to check for negative cycle
    // as bellman ford also fails or stuck on loop if there is negative cycle on a directed graph
    for(auto it : edge) {
        int node = it[0];
        int adjNode = it[1];
        int edgeWeight= it[2];
            if(distance[node] != 1e9 && distance[node] + edgeWeight < distance[adjNode]) {  
                // if after v - 1 relaxations, if still the distance of v or adjNode is updating, means negative edge cycle
                return {-1};
            }
    }

    return distance;
}
int main() {
    int nodes;
    cout << "Enter number of nodes : ";
    cin >> nodes;
    int edges;
    cout << "Enter number of edges : ";
    cin >> edges;
    // for bellmanford, generally create edge list instead of adjacency list
    vector<vector<int>> adj(nodes);
    for(int i = 0; i <= edges - 1; i++) {
        int u, v;
        int weight;   // in inner vector, put pair of neighbouring node and weight
        adj.push_back({u, v, weight});
    }
    return 0;
}

// Time Complexity = O(E (V - 1)) = O(EV) = O(v ^ 2)
//                 = but worst case in connected graphs, O(E (V(V - 1) / 2)) = O(E V^2) = O(v ^ 3)
// Space Complexity = O(E + V)  {O(V) for distance vector and O(E) for edge list}