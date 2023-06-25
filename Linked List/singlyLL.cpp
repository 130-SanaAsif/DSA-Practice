#include<bits/stdc++.h>
using namespace std;

class LinkedList{
    public:
    int data;
    LinkedList* next;

    //Constructor.
    LinkedList(int data){
        this -> data = data;
        this -> next = NULL; 
    }
};

void insertAtHead(LinkedList* &head, int d){
    //create new node.
    LinkedList* temp = new LinkedList(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(LinkedList* &tail, int d){
    //create new node.
    LinkedList* temp = new LinkedList(d);
    tail -> next = temp;
    tail = temp;
}
void printLL(LinkedList* &head){
    //create temp node which will point to head.
    LinkedList* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    //create new node
    LinkedList* node1 = new LinkedList(10);

    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    LinkedList* head = node1;
    LinkedList* tail = node1;
    printLL(head);

    insertAtTail(tail,12);
    printLL(head);

    insertAtTail(tail,15);
    printLL(head);
    return 0;
}