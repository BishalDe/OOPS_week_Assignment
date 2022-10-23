// 8.	Pop element 9, 3 from the queue using linked list implementation.

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void enqueue(int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        newnode->data = val;
        newnode->next = NULL;
        head = newnode;
    }
    else
    {
        struct node *p = head;
        newnode->data = val;
        newnode->next = NULL;
        while (p->next != NULL)
            p = p->next;
        p->next = newnode;
    }
}

void display()
{   struct node *ptr=head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

void dequeue(int val)
{
    if (head == NULL)
    {
        cout << "Underflow..!" << endl;
    }
    else if(head->data == val){
        head=head->next;
    }
    else
    {
        struct node *p = head;
        struct node *q=head->next;
        while(q->data!=val && q->next !=NULL){
            p= p->next;
            q= q->next;
        }
        if(q->data==val){
            p->next =q->next;
            free(q);
        }
    }
}

int main()
{
    enqueue(70);
    enqueue(8);
    enqueue(2);
    enqueue(3);
    enqueue(1);
    enqueue(9);
    enqueue(10);
    display();
    dequeue(9);
    dequeue(3);
    display();
    return 0;
}