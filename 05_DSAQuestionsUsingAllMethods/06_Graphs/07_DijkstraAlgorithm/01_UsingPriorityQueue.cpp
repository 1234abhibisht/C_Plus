// for adjancy list, use vector 

#include <bits/stdc++.h>
using namespace std;
vector<int> dijkstra(int v, vector<vector<pair<int, int>>> adj, int source) {  // we are given number of nodes, adjancy list and source node
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> distance(v);  // use size v for 0 based indexing
    for(int i = 0; i <= v - 1; i++) {
        distance[i] = 1e9; // in c++, 1e9 is used for 1 * 10 ^ 9 or 1 billion, it is used as alternative for infinity
    }
    pq.push({0, source});
    distance[source] = 0;
    while(!pq.empty()) {
        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        // finalization step, as if current distance is greater than that of the node present in vector, skip the interation
        // because in greedy algirithm, we finalize the optimal solution at every iteration
        if(dist > distance[node]) {
            continue;
        }

        for(auto it : adj[node]) {  // as adj vector contains pairs in inner vectors
            int edgeWeight = it.first;
            int adjNode = it.second;
            if(dist + edgeWeight < distance[adjNode]) {
                distance[adjNode] = dist + edgeWeight;  // first update distance in vector
                pq.push({distance[adjNode], adjNode});  // then push updated distance to priority_queue
            }
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
    vector<vector<pair<int, int>>> adj(nodes);
    for(int i = 0; i <= edges - 1; i++) {
        int u, v;
        int weight;   // in inner vector, put pair of neighbouring node and weight
        adj[u].push_back({v, weight});
        adj[v].push_back({v, weight});
    }
    return 0;
}

// Time Complexity = O(E logV)
// Space Complexity = O(E + V),  {O(V) for distance vector and O(E) for adjacent list}