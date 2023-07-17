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

void insert(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }
    node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node*head){
    node*ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<"->";
        ptr = ptr->next;
    }
    cout<<"NULL"<<endl;
}


 node* reverseList(node* head){
   
    node*prev = NULL;
    node*cur = head;
    node* forward = NULL;
    while(cur != NULL){
        forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forward;
    }
    head = prev; 
    return head;
}

int main(){
    node*head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    display(head);
    node* result = reverseList(head);

    display(result);
    return 0;
}