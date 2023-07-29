#include<bits/stdc++.h>
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

void insertNode(Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        return;
    }
    else{
        Node* newNode = new Node(d);
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printNode(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


Node* removeMiddleNode(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head->next;
    
    if(fast->next == NULL){
        slow->next = NULL;
        return head;
    }

    Node* x = NULL;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        x = slow;
        slow = slow->next;
    }
    if(fast == NULL){
        x->next = slow->next;
    }
    else if(fast->next == NULL){
        slow->next = slow->next->next;
    }
    return head;
}

int main(){
    Node* head = NULL;
    insertNode(head,1);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,7);
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,6);
    printNode(head);

    Node* res = removeMiddleNode(head);
    printNode(res);

    return 0;
}