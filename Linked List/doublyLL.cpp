#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node*next;
    Node*prev;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    //Create a node temp;
    Node* temp = new Node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    //Create a node temp.
    Node* temp = new Node(d);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

//Traversing a Linked List.
void printLinkedList(Node* &head){

    Node*temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//Return the length of linked list.
int getLengthNode(Node* &head){

    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

int main(){

    Node* node1 = new Node(10);

    //Head pointed to node1.
    Node* head = node1;

    //Tail pointed to node1.
    Node* tail = node1;

    printLinkedList(head);

    //insertAtHead(head, 11);
    //printLinkedList(head);

    insertAtTail(tail,12);
    printLinkedList(head); 

    insertAtTail(tail,13);
    printLinkedList(head); 

    insertAtTail(tail,32);
    printLinkedList(head); 

    insertAtTail(tail,23);
    printLinkedList(head); 

    cout<<"Length of Linked List : "<<getLengthNode(head);

    return 0;
}