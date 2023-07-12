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

    ~Node(){
        int val = this->data;

        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for "<<val<<endl;
    }
};

void insertNode(Node* &tail, int element, int d){
    //Check for empty-list.
    if(tail == NULL){
        Node* cur = new Node(d);
        tail = cur;
        cur->next = cur;
    }
    else{
        //Non-empty list.
        Node* temp = tail;

        if(temp->data != element){
            temp = temp->next;
        }

        Node* newNode = new Node(d);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void printCircularLL(Node* &tail){
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}

int main(){
    Node* tail = NULL;

    insertNode(tail,1,3);
    printCircularLL(tail);

    insertNode(tail,3,5);
    printCircularLL(tail);

    insertNode(tail,5,4);
    printCircularLL(tail);

    insertNode(tail,4,6);
    printCircularLL(tail);

    return 0;
}