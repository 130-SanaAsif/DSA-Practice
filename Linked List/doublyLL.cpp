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

void insertAtHead(Node* &tail, Node* &head, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{//Create a node temp;
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail,Node* &head, int d){
    
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }

    else{//Create a node temp.
        Node* temp = new Node(d);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &tail,Node* &head, int pos, int d){
    
    if(pos == 1){
        insertAtHead(tail, head, d);
        return;
    }
    
    //Create a node temp.

    Node* temp = head;
    int n = 1;
    while(n < pos-1){
        temp = temp->next;
        n++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, head, d);
        return;
    }

    Node* NodeToInsert = new Node(d);
    
    NodeToInsert->next = temp->next;
    temp->next->prev = NodeToInsert;
    temp->next = NodeToInsert;
    NodeToInsert->prev = temp;

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

    //Node* node1 = new Node(10);

    //Head pointed to node1.
    //Node* head = node1;

    Node* head = NULL;

    //Tail pointed to node1.
    //Node* tail = node1;

    Node* tail = NULL;

    printLinkedList(head);

    insertAtHead(tail,head, 11);
    printLinkedList(head);
   

    insertAtTail(tail,head,12);
    printLinkedList(head); 

    //cout<<"head "<<head->data<<endl;
    //cout<<"tail "<<tail->data<<endl;

    insertAtTail(tail,head,13);
    printLinkedList(head); 

    //cout<<"head "<<head->data<<endl;
    //cout<<"tail "<<tail->data<<endl;

    insertAtTail(tail,head,32);
    printLinkedList(head); 

    //cout<<"head "<<head->data<<endl;
    //cout<<"tail "<<tail->data<<endl;

    insertAtTail(tail,head,23);
    printLinkedList(head); 

    //cout<<"head "<<head->data<<endl;
    //cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail,head,3,22);
    printLinkedList(head);

    //cout<<"head "<<head->data<<endl;
    //cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail,head,1,52);
    printLinkedList(head);

    //cout<<"head "<<head->data<<endl;
    //cout<<"tail "<<tail->data<<endl;

    insertAtPosition(tail,head,8,102);
    printLinkedList(head);

    //cout<<"head "<<head->data<<endl;
    //cout<<"tail "<<tail->data<<endl;

    cout<<"Length of Linked List : "<<getLengthNode(head)<<endl;
    return 0;
}