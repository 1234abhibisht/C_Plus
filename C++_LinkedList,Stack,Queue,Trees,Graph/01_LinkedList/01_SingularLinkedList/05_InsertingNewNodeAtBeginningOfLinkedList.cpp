#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node* link;
};
int main() {
    struct node* start = NULL;
    start = (struct node*)malloc(sizeof(struct node));
    start -> data = 10;
    start -> link = NULL;

    // second node
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = 20;
    temp -> link = NULL;
    start -> link = temp;

    // so we have a linked list containing two nodes
    // now insert a new node at beginning of singular linked list

    // create a new node with temp pointer
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = 30;
    temp -> link = NULL;
    
    temp -> link = start;
    start = temp;

    // output
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> link;
    }
    return 0;
}