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
    cout << start -> data;
    return 0;
}