// we are given two sorted linked list
// merge both of them in sorted order as a single linked list


// Brute Force Method
// -> create a vector
// -> traverse both list one by one and put their elements in vector
// -> sort vector
// -> put elements of vector in new linked list

#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node* link;
};
struct node* mergeLinkedList(struct node* head1, struct node* head2) {
    struct node* ptr1 = head1;
    struct node* ptr2 = head2;
    struct node* dummy = (struct node*)malloc(sizeof(struct node));
    dummy -> data = -1;
    dummy -> link = NULL;
    struct node* temp = dummy;
    while(ptr1 -> link != NULL && ptr2 -> link != NULL) {
        if(ptr1 -> data < ptr2 -> data) {
            temp -> link = ptr1;
            temp = ptr1;
            ptr1 = ptr1 -> link;
        }
    }
}
int main() {
    int n;
    printf("number of nodes for first linked list : ");
    cin >> n;

    // creating first node
    struct node* start = NULL;
    start = (struct node*)malloc(sizeof(struct node));
    int data1_node1;
    printf("first node data for first linked list: ");
    cin >> data1_node1;
    start -> data = data1_node1;
    start -> link = NULL;

    struct node* ptr1 = start;
    struct node* temp1 = NULL;
    for(int i = 1; i <= n - 1; i++) {
        temp1 = (struct node*)malloc(sizeof(struct node));
        int data_next_node1;
        printf("enter data of %d node : ", i + 1);
        cin >> data_next_node1;
        temp1 -> data = data_next_node1;
        temp1 -> link = NULL;
        ptr1 -> link = temp1;
        ptr1 = temp1;
    }

    // creating second node
    struct node* head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    int m;
    printf("number of nodes for second linked list : ");
    cin >> m;
    int data1_node2;
    printf("first node data of second linked list : ");
    cin >> data1_node2;
    head -> data = data1_node2;
    head -> link = NULL;
    struct node* temp2 = NULL;
    struct node* ptr2 = head;
    for(int i = 1; i <= m - 1; i++) {
        temp2 = (struct node*)malloc(sizeof(struct node));
        int data_next_node2;
        printf("enter data of %d node : ",i + 1);
        cin >> data_next_node2;
        temp2 -> data = data_next_node2;
        temp2 -> link = NULL;
        ptr2 -> link = temp2;
        ptr2 = temp2;
    }

    struct node* newHead = mergeLinkedList(start, head);
    
    // output
    struct node* out1 = newHead;
    while(out1 != NULL) {
        cout << out1 -> data << " ";
        out1 = out1 -> link;
    }
    return 0;
}

// Time Complexity - O(n) + O(n) {for traversing two lists} + O(n logn){sorting vector} + O(n){creating new list}
// Space Complexity - O(n){creating new vector} + O(n){creating new list}