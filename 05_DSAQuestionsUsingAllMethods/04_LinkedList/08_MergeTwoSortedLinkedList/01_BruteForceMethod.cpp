// we are given two sorted linked list
// merge both of them in sorted order as a single linked list

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
struct node* mergeLinkedList(struct node* start, struct node* head) {

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
    printf("number of nodes for first linked list : ");
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
        printf("enter data of %d node : ",i);
        cin >> data_next_node2;
        temp2 -> data_node2 = data_next_node2;
        temp2 -> link_node2 = NULL;
        ptr2 -> link_node2 = temp2;
        ptr2 = temp2;
    }

    struct node* newHead = mergeLinkedList(start, head);
    // output
    // struct node1* out1 = start;
    // while(out1 != NULL) {
    //     cout << out1 -> data_node1 << " ";
    //     out1 = out1 -> link_node1;
    // }
    // struct node2* out2 = head;
    // while(out2 != NULL) {
    //     cout << out2 -> data_node2 << " ";
    //     out2 = out2 -> link_node2;
    // }
    return 0;
}