#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    //Constructor.
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void inserAtHead(Node* &head, int d){
    //Create new node - temp.

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    //Create new node - temp.

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertInMiddle(Node* &tail, Node* &head, int pos, int d){
    //Insert at start position.
    if(pos == 1){
        inserAtHead(head, d);
        return;
    }
    
    //Create new node - temp;
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }

    //Insert at last position.
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return;
    }

    //Create new node for d.
    Node* NodeToInsert = new Node(d);

    NodeToInsert -> next = temp -> next;
    temp -> next = NodeToInsert;


}

void printLinkedList(Node* &head){
    //Create new node - temp;

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    //Create new node = node1.
    Node* node1 = new Node(10);

    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    //head pointed to node1.
    Node* head = node1;
    //tail pointed to node1.
    Node* tail = node1;
    printLinkedList(head);

    //inserAtHead(head, 12);
    insertAtTail(tail, 12);
    printLinkedList(head);

    //inserAtHead(head, 15);
    insertAtTail(tail, 15);
    printLinkedList(head);

    insertAtTail(tail, 16);
    printLinkedList(head);

    insertAtTail(tail, 18);
    printLinkedList(head);

    insertInMiddle(tail,head,6,22);
    printLinkedList(head);

    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    
    return 0;
}