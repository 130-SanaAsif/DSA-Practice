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
    Node* newNode = new Node(d);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

Node* Sort012(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* temp = head;
    int num = 0; //For counting number of 0's.
    int num1 = 0; //For counting number of 1's.
    int num2 = 0; //For counting number of 2's.

    while(temp != NULL){
        if(temp->data == 0){
            num++;
        }
        else if(temp->data == 1){
            num1++;
        }
        else{
            num2++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
        if(num != 0){
            temp->data = 0;
            num--;
        }
        else if(num1 != 0){
            temp->data = 1;
            num1--;
        }
        else{
            temp->data = 2;
            num2--;
        }
        temp = temp->next;
    }
    return head;
}

void insertAtTail(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}

Node* sortList(Node* head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;
    while(curr != NULL){
        int value = curr->data;
        if(value == 0){
            insertAtTail(zeroTail,curr);
        }
        else if(value == 1){
            insertAtTail(oneTail,curr);
        }
        else{
            insertAtTail(twoTail,curr);
        }
        curr = curr->next;
    }

    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}


void printNode(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    insertNode(head,0);
    insertNode(head,1);
    insertNode(head,0);
    insertNode(head,2);
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,1);
    printNode(head);

    // Node* res = Sort012(head);
    // printNode(res);

    Node* ans = sortList(head);
    printNode(ans);

    return 0;
}