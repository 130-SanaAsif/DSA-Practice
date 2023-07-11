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

    //Destructor.
    ~Node(){
        int value = this -> data;
        //Memory free.
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for "<<value<<endl;
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

void deleteNode(int pos, Node* &head, Node* &tail){

    //Delete at start node.
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    //Delete at middle node or last node.
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    
        //Updating tail.
        int d = prev->data;
        if(prev->next == NULL){
            insertAtTail(tail,d);
            return;
        }
    }
}

void deleteNodeValue(int value, Node* &head, Node* &tail){

    //Delete the first node.
    if(head->data == value){
        Node* curr = head;
        head = head->next;
        curr->next = NULL;
        delete curr;
    }

    //Delete the middle or last node.
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(curr != NULL){
            prev = curr;
            curr = curr->next;
            cnt++;
            if(curr->data == value){
            break;
            }
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    
        //Updating tail.
        int d = prev->data;
        if(prev->next == NULL){
            insertAtTail(tail,d);
            return;
        }
    }
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
    
    deleteNode(6,head,tail);
    printLinkedList(head);

    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    deleteNodeValue(18,head,tail);
    printLinkedList(head);

    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    cout<<getLengthNode(head);

    return 0;
}