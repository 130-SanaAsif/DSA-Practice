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
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
        return;
    }
    else{
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

Node* reverse(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

Node* add1ToList(Node* head){
    head = reverse(head);
    int carry = 1;
    Node* temp = head;
    Node* prev = head;
    while(head != NULL){
        int sum = carry+head->data;
        carry = sum/10;
        sum = sum%10;
        head->data = sum;
        prev = head;
        head = head->next;
    }

    if(carry != 0){
        Node* newNode = new Node(0);
        newNode->data = carry;

        if(prev != NULL){
            prev->next = newNode;
        }
        else{
            return newNode;
        }
    }
    Node* ans = reverse(temp);
    return ans;
}

int main(){
    Node* head = NULL;

    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 5);
    insertNode(head, 8);
    printNode(head);

    Node* res = add1ToList(head);
    printNode(res);

    return 0;
}