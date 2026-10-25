// In linked list, there must be a pointer always at starting node(start pointer)
// we need another pointer to create nodes more than one

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
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = 20;
    ptr -> link = NULL;
    start -> link = ptr;
    return 0;
}