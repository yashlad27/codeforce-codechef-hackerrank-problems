// Linked list creation and traversal
// program to create a simple linked list with 3 nodes: 

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void display(node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}

int main()
{
    node* head = NULL;
    node* second = NULL;
    node* third = NULL;

    // allocate 3 nodes in the heap:
    head = new node();
    second = new node();
    third = new node();

    //assigning data to first node
    head->data =1;
    // link first node to second node
    head->next = second;

    //assigning data to second node
    second->data=2;
    // link the second node to third node
    second->next = third;

    // assigning data to third node
    third->data=3;
    third->next=NULL;

    display(head);
    return 0;
}