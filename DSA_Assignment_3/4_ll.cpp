// 4.	Pop element 9, 3 from the stack using linked list implementation.

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void push(int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        ptr->data = val;
        ptr->next = NULL;
        head = ptr;
    }
    else
    {
        ptr->data = val;
        ptr->next = head;
        head = ptr;
    }
}

void display()
{
    struct node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void popelelement(int val)
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
    push(70);
    push(8);
    push(2);
    push(3);
    push(1);
    push(9);
    push(10);
    display();
    popelelement(9);
    popelelement(3);
    display();

    return 0;
}