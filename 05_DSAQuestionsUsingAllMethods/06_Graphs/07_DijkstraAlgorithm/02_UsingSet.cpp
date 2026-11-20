// for adjancy list, use vector 

#include <bits/stdc++.h>
using namespace std;
vector<int> dijkstra(int v, vector<vector<pair<int, int>>> adj, int source) {  // we are given number of nodes, adjancy list and source node
    set<pair<int, int>> st;
    vector<int> distance(v);  // use size v for 0 based indexing
    for(int i = 0; i <= v - 1; i++) {
        distance[i] = 1e9;  // to put all elements to infinity
    }
    st.insert({0, source});
    distance[source] = 0;
    while(!st.empty()) {
        auto front = *(st.begin());  // as st.begin() will point to address of first element of set
        int node = front.first;
        int dist = front.second;
        st.erase(front);
        
        // finalization step, as if current distance is greater than that of the node present in vector, skip the interation
        if(dist > distance[node]) {
            continue;
        }

        for(auto it : adj[node]) {
            int edgeWeight = it.first;
            int adjNode = it.second;
            if(dist + edgeWeight < distance[adjNode]) {
                // erase previous paths before inserting new one
                if(distance[adjNode] != 1e9) {
                    st.erase({distance[adjNode], adjNode});
                }
                distance[adjNode] = dist + edgeWeight;
                st.insert({distance[adjNode], adjNode});
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
// Space Complexity = O(E + V)