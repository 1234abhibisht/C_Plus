// output -> {1, {2,3}, {4,5,6,7}}

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
vector<vector<int>> levelOrderTraversal(node* root) {
    vector<vector<int>> levelorder;
    if(root == NULL) {
        return levelorder;
    }
    queue<node*> qu;
    qu.push(root);
    while(!qu.empty()) {
        vector<int> level;
        int size = qu.size();
        for(int i = 0; i <= size - 1; i++) {
            root = qu.front();
            qu.pop();
            level.emplace_back(root -> data);
            if(root -> left != NULL) {
                qu.push(root -> left);
            }
            if(root -> right != NULL) {
                qu.push(root -> right);
            }
        }
        levelorder.emplace_back(level);
    }
    return levelorder;
}
int main() {
    node* root = new node(5);  // we have use constructor inside struct, so we dont need to use malloc, instead use new
    root -> left = new node(10);
    root -> right = new node(20);
    root -> left -> left = new node(30);
    root -> left -> right = new node(40);
    root -> right -> left = new node(50);
    root -> right -> right = new node(60);
    vector<vector<int>> output = levelOrderTraversal(root);
    for(auto v : output) {
        // cout << v << " ";
    }
    return 0;
}

// Time Complexity = O(n)
//   why O(n) time complexity ?
//   -> because we are traversing to every node of tree.
//   -> and inner for loop is just to insert the nodes of a level together in nested vector form for output answer format purpose
// Space Complexity = O(n), n is number of nodes because it is BFS
//                    O(1), when tree is skewed as skewed tree has width = 1 in each level