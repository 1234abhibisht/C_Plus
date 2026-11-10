// we are given two sorted linked list
// merge both of them in sorted order as a single linked list


// Brute Force Method
// -> create a vector
// -> traverse both list one by one and put their elements in vector
// -> sort vector
// -> put elements of vector in new linked list

#include <bits/stdc++.h>
using namespace std;
struct node1 {
    int data_node1;
    struct node1* link_node1;
};
struct node2 {
    int data_node2;
    struct node2* link_node2;
};
struct nodeNew {
    int dataNew;
    struct nodeNew* linkNew;
};
struct nodeNew* mergeLinkedList(vector<int> v) {
    struct nodeNew* head = (struct nodeNew*)malloc(sizeof(struct nodeNew));
    head -> dataNew = v[0];
    struct nodeNew* ptr = head;
    struct nodeNew* temp = NULL;
    for(int i = 1; i <= v.size() - 1; i++) {
        temp = (struct nodeNew*)malloc(sizeof(struct nodeNew));
        temp -> dataNew = v[i];
        temp -> linkNew = NULL;
        ptr -> linkNew = temp;
        ptr = temp;
    }
    return head;
}
int main() {
    int n;
    printf("number of nodes for first linked list : ");
    cin >> n;

    // creating first node
    struct node1* start = NULL;
    start = (struct node1*)malloc(sizeof(struct node1));
    int data1_node1;
    printf("first node data for first linked list: ");
    cin >> data1_node1;
    start -> data_node1 = data1_node1;
    start -> link_node1 = NULL;

    struct node1* ptr1 = start;
    struct node1* temp1 = NULL;
    for(int i = 1; i <= n - 1; i++) {
        temp1 = (struct node1*)malloc(sizeof(struct node1));
        int data_next_node1;
        printf("enter data of %d node : ", i + 1);
        cin >> data_next_node1;
        temp1 -> data_node1 = data_next_node1;
        temp1 -> link_node1 = NULL;
        ptr1 -> link_node1 = temp1;
        ptr1 = temp1;
    }

    // creating second node
    struct node2* head = NULL;
    head = (struct node2*)malloc(sizeof(struct node2));
    int m;
    printf("number of nodes for second linked list : ");
    cin >> m;
    int data1_node2;
    printf("first node data of second linked list : ");
    cin >> data1_node2;
    head -> data_node2 = data1_node2;
    head -> link_node2 = NULL;
    struct node2* temp2 = NULL;
    struct node2* ptr2 = head;
    for(int i = 1; i <= m - 1; i++) {
        temp2 = (struct node2*)malloc(sizeof(struct node2));
        int data_next_node2;
        printf("enter data of %d node : ",i + 1);
        cin >> data_next_node2;
        temp2 -> data_node2 = data_next_node2;
        temp2 -> link_node2 = NULL;
        ptr2 -> link_node2 = temp2;
        ptr2 = temp2;
    }

    vector<int> v;
    
    while(start != NULL) {
        v.emplace_back(start -> data_node1);
        start = start -> link_node1;
    }
    while(head != NULL) {
        v.emplace_back(head -> data_node2);
        head = head -> link_node2;
    }

    sort(v.begin(), v.end());

    struct nodeNew* newHead = mergeLinkedList(v);
    
    // output
    struct nodeNew* out1 = newHead;
    while(out1 != NULL) {
        cout << out1 -> dataNew << " ";
        out1 = out1 -> linkNew;
    }
    return 0;
}

// Time Complexity - O(n) + O(n) {for traversing two lists} + O(n logn){sorting vector} + O(n){creating new list}
// Space Complexity - O(n){creating new vector} + O(n){creating new list}