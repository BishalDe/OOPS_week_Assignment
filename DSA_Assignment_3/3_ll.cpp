// 3.	Push element 70, 8,2,3,1,9,10 into the stack using linked list implementation.


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
    while (head != NULL)
    {
        cout << head->data << " ";
        head=head->next;
    }
    cout << endl;
}

int main()
{
    push(70);push(8);push(2);push(3);push(1);push(9);push(10);
    display();
    return 0;
}