// for a complete binary tree array representation is better

#include <bits/stdc++.h>
using namespace std;
void preorderTraversal(vector<int> &tree, int i) {
    if(i >= tree.size()) {
        return;
    }
    cout << tree[i] << " ";
    preorderTraversal(tree, 2 * i + 1);  // for left subtree
    preorderTraversal(tree, 2 * i + 2);  // for right subtree
}
int main() {
    vector<int> tree = {10,20,30,40,50,60,70,80};
    preorderTraversal(tree, 0);
    return 0;
} 

// Time Complexity - O(n) -> for complete binary tree, where n is number of node
//                   O(2^n) -> for skewed binary trees
// Space Complexity - O(n) -> for complete binary tree, as Auxillary space is used in recursion
//                   O(2^n) -> for skewed binary trees
