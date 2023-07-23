#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    //Constructor.
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

Node* removeDuplicate(Node* head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        return head;
    }

    Node* temp = head;

    while(temp != NULL){
        if((temp->next != NULL) && (temp->data == temp->next->data)){
            Node* nextPointer = temp->next->next;
            Node* deleteTo = temp->next;
            delete(deleteTo);
            temp->next = nextPointer;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}

int main(){
    Node* head = NULL;
    insertNode(head, 2);
    insertNode(head, 2);
    insertNode(head, 5);
    insertNode(head, 5);
    insertNode(head, 5);
    insertNode(head, 6);
    insertNode(head, 6);
    cout<<"Before Removing "<<endl;
    printNode(head);
    cout<<"After Removing "<<endl;
    Node* res = removeDuplicate(head);
    printNode(res);
    return 0;
}