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

void insert(Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        return;
    }

    Node* nodeToInsert = new Node(d);
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
    }
    temp->next = nodeToInsert;
}

Node* iterative(Node* head){

    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* cur = head;
    Node* prev = NULL;
    Node* forward = NULL;
    while(cur != NULL){
        forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = cur->next;
    }
    head = prev;
    return head;
}

void printList(Node* &head){
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    printList(head);
}