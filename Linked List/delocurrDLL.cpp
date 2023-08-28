#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
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
        newNode->prev = newNode;
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

//Better Approach.
//TC - O(n).
//SC - 0(1).

Node* delElement(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL && head->next->data == k){
        return NULL;
    }
    Node* ans = new Node(-1);
    Node* tail = ans;
    Node* back = ans;

    Node* curr = head;
    while(curr != NULL){
        if(curr->data != k){
            Node* temp = new Node(curr->data);
            tail->next = temp;
            tail->prev = back;
            back = tail;
            tail = temp;
        }
        curr = curr->next;
    }
    return ans->next;
}

//Optimal Approach.
//TC - O(n).
//SC - O(1).

Node* deleteNode(Node* head, int k){
    Node* answer = new Node(-1);

    answer->next = head;
    head->prev = answer;

    Node* current = head;

    while(current!=NULL){
      if (current->data == k) {
        Node *prevNode = current->prev;
        Node *nextNode = current->next;

        prevNode->next = nextNode;
        if(nextNode!=NULL){
            nextNode->prev = prevNode;
        }
        delete current;
        current = nextNode;
      }
      else{
          current = current->next;
      }
    }
    head->prev = NULL;
    head = answer->next;
    return head;
}

int main(){
    Node* head = NULL;

    insertNode(head,10);
    insertNode(head,4);
    insertNode(head,10);
    insertNode(head,3);
    insertNode(head,5);
    insertNode(head,20);
    insertNode(head,10);

    printNode(head);

    // Node* ans = delElement(head,10);
    // printNode(ans);

   Node* res = deleteNode(head, 10);
   printNode(res);

    return 0;
}