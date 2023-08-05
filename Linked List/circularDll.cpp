#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int value = this->data;

        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
        temp->prev = temp;
    }
    else{
        Node* temp = tail;
        
        while(temp->data != element){
            temp = temp->next;
        }

        Node* newNode = new Node(d);
        newNode->next = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        temp->prev = newNode->next;

    }
}

void deleteNode(Node* &tail, int val){
    if(tail == NULL){
        cout<<"List is empty."<<endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != val){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        curr->next->prev = prev->next;

        if(tail == curr){
            tail = prev;
        }
        else if(prev == curr){
            tail = NULL;
        }

        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }
}

void printNode(Node* &tail){
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else
    {
        Node* temp = tail;
        do{
            cout<<tail->data<<" ";
            tail = tail->next;
        }while(tail != temp);
        cout<<endl;
    }
}

int main(){
    Node* tail = NULL;
    insertNode(tail,5,1);
    printNode(tail);

    insertNode(tail,1,2);
    printNode(tail);

    insertNode(tail,2,3);
    printNode(tail);

    insertNode(tail,1,5);
    printNode(tail);

    insertNode(tail,5,6);
    printNode(tail);

    deleteNode(tail,6);
    printNode(tail);

    deleteNode(tail,5);
    printNode(tail);

    deleteNode(tail,1);
    printNode(tail);

    deleteNode(tail,2);
    printNode(tail);
    
    return 0;
}