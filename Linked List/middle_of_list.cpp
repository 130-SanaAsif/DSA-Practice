#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void insert(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }
    Node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void diplay(Node* &n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}
Node* MiddleNode(Node** head){
    Node*slow = *head;
    Node*fast = *head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return *head = slow;
}


int main(){
    Node* head = NULL;
    insert(head, 4);
    insert(head, 7);
    insert(head, 5);
    insert(head, 3);
    // insert(head, 2);
    MiddleNode(&head);
    diplay(head);
    return 0;
}