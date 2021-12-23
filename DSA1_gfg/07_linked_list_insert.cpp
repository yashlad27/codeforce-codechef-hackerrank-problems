// INSERTING A NODE:

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};

void push_node(node** head_ref, int new_data)
{
    node* new_node = new node(); // 1. allocate node
    new_node -> data = new_data; // 2. put in the data
    new_node->next=(*head_ref); // 3. make next of new node as head
    (*head_ref)=new_node; // 4. move head to point to the new node
}

void insert_after(node* prev_node, int new_data)
{
    // 1. check if the given prev_node is NULL
    if(prev_node == NULL)
    {
        cout<<"The given previous node cannot be NULL";
        return;
    }

    // 2. allocate new node
    node* new_node = new node();
    // 3. put in the data
    new_node->data = new_data;
    // 4. make next of new node as prev_node
    new_node->next = prev_node->next;
    // 5. move the next of prev_node as new_node
    prev_node->next=new_node;
}

void append(node** head_ref, int new_data)
{
    node* new_node = new node();
    node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL)
    {
        *head_ref= new_node;
        return;
    }

    while(last->next != NULL)
    {
        last = last->next;
        return;
    }
}

void display(node *node)
{
    while(node!=NULL)
    {
        cout<<" "<<node->data;
        node=node->next;
    }
}

int main()
{
    node* head = NULL;

    append(&head, 6);
    push_node(&head, 7);
    push_node(&head, 1);
    append(&head, 4);
    insert_after(head->next, 8);

    cout<<"Created linked list is: ";
    display(head);

    return 0;
}