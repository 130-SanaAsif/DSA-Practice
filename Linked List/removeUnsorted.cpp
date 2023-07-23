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

void insertNode(Node* &head, int d){
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

void printNode(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* removeDuplicate(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* cur = head;
    Node* np = NULL;
    while (cur != NULL){
        Node* temp = cur->next;
        while(temp != NULL){
            np = temp;
            if(cur->data == temp->data){
                Node* nextPoint = temp->next->next;
                Node* deleteTo = temp;
                delete(deleteTo);
                np = nextPoint;
            }
            else{
                
                temp = temp->next;
            }
        }
        cur = cur->next;
    }
    return head;
}

int main(){
    Node* head = NULL;
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 8);
    insertNode(head, 1);
    insertNode(head, 6);
    insertNode(head, 8);
    insertNode(head, 2);
    printNode(head);
    Node* res = removeDuplicate(head);
    printNode(res);
    return 0;
}