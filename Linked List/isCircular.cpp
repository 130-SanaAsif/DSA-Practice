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

void insertSingle(Node* &head, int d){
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

void insertCircular(Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        head->next = head;
        return;
    }
    else{
        Node* newData = new Node(d);
        Node* temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        newData->next = temp->next;
        temp->next = newData;
    }
}

void printSingle(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void printCircular(Node* &head){
    Node* temp = head;
    
    do
    {
        cout<<head->data<<"->";
        head = head->next;
    } while (head != temp);
    cout<<endl;
}

bool isCircular(Node* head){
    if(head == NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp == head){
        return true;
    }
    return false;
}

int main(){
    Node* head = NULL;
    //Cicular linked list
    // insertCircular(head, 4);
    // insertCircular(head, 5);
    // insertCircular(head, 6);
    // insertCircular(head, 7);
    // insertCircular(head, 8);
    // printCircular(head);

    //Singly linked list.
    // insertSingle(head,6);
    // insertSingle(head,5);
    // insertSingle(head,7);
    // insertSingle(head,9);
    // insertSingle(head,1);
    // printSingle(head);
    
    if(isCircular(head)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}