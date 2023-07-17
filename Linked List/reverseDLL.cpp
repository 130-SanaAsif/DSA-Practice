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
};


void insert(Node* &head, int d){
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
        newNode->prev = newNode;
    }
}

void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

//Approach1 using iteration.
//TC - O(n).
//SC - O(1).

Node* reverseDLL(Node* head){

    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* cur = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while (cur != NULL)
    {
        forward = cur->next;
        cur->next = prev;
        cur->prev = forward;
        prev = cur;
        cur = forward;
    }
    return prev;
}

//Approach2 using recursion 1.
//TC - O(n).
//SC - O(n).

void Recursion(Node* &head, Node* cur, Node* prev){
    if(cur == NULL){
        head = prev;
        return;
    }

    Node* forward = cur->next;
    Recursion(head,forward,cur);
    cur->next = prev;
    cur->prev = forward;
}

Node* recursionI(Node* head){
    Node* cur = head;
    Node* prev = NULL;
    Recursion(head,cur,prev);
    return head;
}

//Approach3 using recursion.
//TC - O(n).
//SC - O(n).

Node*  recursionII(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* reverseNode = recursionII(head->next);
    head->next->next = head;
    head->next->prev = head;
    head->next = NULL;
    return reverseNode;
}

Node* recursiveDLL(Node* head){
    return recursionII(head);
}


int main(){
    Node* head = NULL;
    insert(head,3);
    insert(head,5);
    insert(head,7);
    insert(head,9);
    insert(head,11);
    cout<<"Before Reverse "<<endl;
    display(head);
    // Node* res = reverseDLL(head);
    // Node* ans = recursionI(head);
    Node* result = recursiveDLL(head);
    cout<<"After Reverse "<<endl;
    display(result);

    return 0;
}