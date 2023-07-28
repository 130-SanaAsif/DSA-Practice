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

void insertAtTail(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}

Node* segregateEvenOdd(Node* head){
    if(head->next == NULL){
        return head;
    }
    Node* evenHead = new Node(-1);
    Node* evenTail = evenHead;

    Node* oddHead = new Node(-1);
    Node* oddTail = oddHead;

    Node* curr = head;
    while(curr != NULL){
        int val = curr->data;
        if(val%2 == 0){
            insertAtTail(evenTail,curr);
        }
        else{
            insertAtTail(oddTail,curr);
        }
        curr = curr->next;
    }

    evenTail->next = oddHead->next;
    oddTail->next = NULL;

    head = evenHead->next;

    delete evenHead;
    delete oddHead;

    return head;
}

int main(){
    Node* head = NULL;
    insertNode(head,2);
    insertNode(head,4);
    insertNode(head,7);
    insertNode(head,6);
    insertNode(head,9);
    insertNode(head,1);
    insertNode(head,3);

    printNode(head);

    Node* res = segregateEvenOdd(head);
    printNode(res);

    return 0;
}