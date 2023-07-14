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
            next = NULL;
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

        while(temp->data != element){
            temp = temp->next;
        }

        Node* newNode = new Node(d);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteNode(Node* &tail, int val){
    //Check for empty list.
    if(tail == NULL){
        cout<<"List is empty, please check again"<<endl;
        return;
    }
    else{
        //Check for no-empty list.

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != val){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //case for 1 node.
        if(curr == prev){
            tail = NULL;
        }

        //case for >= node(two node).
        else if(tail == curr){
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

void printCircularLL(Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"List is Empty."<<endl;
        return;
    }

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

    insertNode(tail,3,7);
    printCircularLL(tail);

    deleteNode(tail,5);
    printCircularLL(tail);

    deleteNode(tail,3);
    printCircularLL(tail);

    deleteNode(tail,6);
    printCircularLL(tail);

    deleteNode(tail,4);
    printCircularLL(tail);

    return 0;
}