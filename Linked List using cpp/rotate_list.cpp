#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;
}

struct node* rotate(node* &head, int k)
{
    node* last = head;
    node* temp = head;

    if(head == NULL || k==0){
        return head;
    }

    while(last->next != NULL){
        last = last->next;
    }

    while(k){
        head = head->next;
        temp->next = NULL;
        last->next = temp;
        last = temp;
        temp = head;
        k--;
    }
    return head;
}

int main(){
    node*head = NULL;
    insert(head,10);
    insert(head,20);
    insert(head,30);
    insert(head,40);
    insert(head,50);
    insert(head,60);

    int k=4;
    display(head);
    rotate(head,k);
    display(head);
    return 0;
}