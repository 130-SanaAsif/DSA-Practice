#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

        node(int d){
            this->data = d;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insertAtHead(node* &head, node* &tail, int d){
    if(head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* newNode = new node(d);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(node* &head, node* &tail, int d){
    if(tail == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertInMiddle(node* &head, node* &tail, int pos, int d){
    if(pos == 1){
        insertAtHead(head, tail, d);
        return;
    }

    node* temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }

    node* newNode = new node(d);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;

}

void printList(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    printList(head);

    insertAtHead(head,tail,20);
    printList(head);

    insertAtTail(head, tail, 30);
    printList(head);
    return 0;
}