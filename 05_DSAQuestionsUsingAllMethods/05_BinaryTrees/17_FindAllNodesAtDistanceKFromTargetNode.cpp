// we are given root, k and a target node
// we need to find all the nodes at distance k from that target node

#include <bits/stdc++.h>
using namespace std;
struct node {
    struct node* left;
    int data;
    struct node* right;

    node(int val) {  // it is a constructor to create a new node
        data = val;
        left = NULL;
        right = NULL;
    }
};
void parent(unordered_map<node*, node*> &parent_track, node* root) {
    queue<node*> qu;
    qu.push(root);
    while(!qu.empty()) {
        root = qu.front();
        qu.pop();
        if(root -> left != NULL) {
            qu.push(root -> left);
            parent_track[root -> left] = root;
        }
        if(root -> right != NULL) {
            qu.push(root -> right);
            parent_track[root -> right] = root;
        }
    }
}
vector<int> nodesAtDistanceK(node* root, node* target, int k) {
    // first of all keep track of parent nodes to traverse upward from target node
    unordered_map<node*, node*> parent_track;
    parent(parent_track, root);
    int dist = 0;
    queue<node*> qu;  // this is for finding nodes at distance k from target using BFS
    unordered_map<node*, bool> visited;
    // to keep track of already visited nodes, why didnt we use vetor of zeros and update to 1 -> because we dont know number of nodes
    // -> and calculating number of nodes will increase complexity
    qu.push(target);
    visited[target] = true;  // if value of key is true, means it is visited alreay
    while(!qu.empty()) {
        if(dist == k) {
            break;
        }
        int size = qu.size();
        for(int i = 0; i <= size - 1; i++) {
            root = qu.front();
            qu.pop();
            // now do radial traversal
            // radial traversal means - traverse to left, right and parent
            if(root -> left != NULL && visited[root -> left] != true) {
                qu.push(root -> left);
                visited[root -> left] = true;
            }
            if(root -> right != NULL && visited[root -> right] != true) {
                qu.push(root -> right);
                visited[root -> right] = true;
            }
            if(parent_track[root] != NULL && visited[parent_track[root]] != true) {
                qu.push(parent_track[root]);
                visited[parent_track[root]] = true;
            }
        }
        dist += 1;
    }
    vector<int> ans;
    while(!qu.empty()) {
        ans.emplace_back(qu.front() -> data);
        qu.pop();
    }
    return ans;
}
int main() {
    node* root = new node(5);  // we have use constructor inside struct, so we dont need to use malloc, instead use new
    root -> left = new node(10);
    root -> right = new node(20);
    root -> left -> left = new node(30);
    root -> left -> right = new node(40);
    root -> right -> left = new node(50);
    root -> right -> right = new node(60);
    return 0;
}

// Time Complexity = O(n){to track parent nodes} + O(n){to check nodes at distance k from target}
// Space Complexity = O(n){queue for parent_track} + O(n){unordered map for parent track} + O(n){queue for nodes finding} + O(n){unordered map for tracking visited node}