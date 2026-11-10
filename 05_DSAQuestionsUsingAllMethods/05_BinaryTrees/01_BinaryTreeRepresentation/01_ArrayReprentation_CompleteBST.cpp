// for a complete binary tree array representation is better

#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> tree = {10,20,30,40,50,60,70,80};
    printf("finding left and right child of each node\n");
    for(int i = 0; i <= tree.size() - 1; i++) {
        // first find left and right child of all nodes(elements in vector)
        int leftChild = 2 * i + 1;
        int rightChild = 2 * i + 2;
        if(leftChild < tree.size()) {
            cout << "left child of " << tree[i] << " is " << tree[leftChild] << "\n";
        }
        if(rightChild < tree.size()) {
            cout << "right child of " << tree[i] << " is " << tree[rightChild] << "\n";
        }
    }
    printf("finding parent node of each node/element\n");
    for(int i = 0; i <= tree.size() - 1; i++) {
        int parentIndex = floor((i - 1) / 2);
        if(parentIndex > 0) {
            cout << "parent node of " << tree[i] << " is " << tree[parentIndex] << "\n";
        }
    }
    return 0;
}