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
        Node* curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = newNode;
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

void insert(Node* &tail, Node* curr){
    tail->next  = curr;
    tail = curr;
}

Node* oddEvenList(Node* head){
    if(head->next == NULL){
        return head;
    }

    Node* oddHead = new Node(-1);
    Node* oddTail = oddHead;

    Node* evenHead = new Node(-1);
    Node* evenTail = evenHead;

    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt%2 != 0){
            insert(oddTail,temp);
        }
        else{
            insert(evenTail,temp);
        }
        temp = temp->next;
    }

    oddTail->next = evenHead->next;
    evenTail->next = NULL;

    head = oddHead->next;

    delete oddHead;
    delete evenHead;

    return head;
}

int main(){
    Node* head = NULL;
    // insertNode(head,2);
    // insertNode(head,1);
    // insertNode(head,3);
    // insertNode(head,5);
    // insertNode(head,6);
    // insertNode(head,4);
    // insertNode(head,7);
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    printNode(head);

    Node* res = oddEvenList(head);
    printNode(res);

    return 0;
}