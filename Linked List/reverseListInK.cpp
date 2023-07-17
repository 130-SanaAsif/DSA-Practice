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

void insertList(Node* &head, int d){

    Node* nodeToInsert = new Node(d);

    if(head == NULL){
        head = nodeToInsert;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = nodeToInsert;
}

Node* kReverse(Node* head, int k){
    
    //Base case.
    if(head == NULL){
        return NULL;
    }

    Node* cur = head;
    Node* prev = NULL;
    Node* next = NULL;
    int cnt = 0;
    while(cur != NULL && cnt < k){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        cnt++;
    }

    int countNode = 0;
    Node* temp = next;
    while(temp != NULL){
        temp = temp->next;
        countNode++;
    }

    if(next != NULL && countNode >= k){
        head->next = kReverse(next,k);
    }
    else if(countNode < k){
        head->next = cur;
    }
    return prev;
}

void printList(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    insertList(head,3);
    insertList(head,5);
    insertList(head,7);
    insertList(head,9);
    insertList(head,10);
    cout<<"Before Reversing"<<endl;
    printList(head);
    Node* result = kReverse(head,2);
    cout<<"After Reversing"<<endl;
    printList(result);
    return 0;
}