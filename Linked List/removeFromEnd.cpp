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
//This code will not work.....it will give runtime error.
// Node* middleNode(Node* head){
//     Node* slow = head;
//     Node* fast = head->next;
//     while(fast != NULL && fast->next != NULL){
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     return slow;
// }

// Node* removeNthFromEnd(Node* head, int n){
//     if(head->next == NULL){
//         return NULL;
//     }

//     Node* curr = middleNode(head);
//     Node* prev = NULL;
//     int cnt = 1;
//     while(curr != NULL && cnt < n){
//         prev = curr;
//         curr = curr->next;
//         cnt++;
//     }
//     prev->next = curr->next;
//     curr->next = NULL;
//     delete curr;

//     return head;
// }


//Approach 1.
//TC - O(n).
//SC - O(1).
Node*deleteNth(Node* head, int pos){
    if(pos == 0){
        head = head->next;
        return head;
    }
    Node* temp = head;
    int i=0;
    while(i<pos-1){
        temp = temp->next;
        i++;
    }
    temp->next = temp->next->next;
    return head;
}
Node* removeNthFromEnd(Node* head, int n){
    if(head ->next == NULL){
        return NULL;
    }
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }
    int pos = (cnt-n);
    return deleteNth(head,pos);
}

int main(){
    Node* head = NULL;
    insertNode(head,16);
    insertNode(head,32);
    insertNode(head,5);
    insertNode(head,11);
    insertNode(head,22);
    insertNode(head,21);
    insertNode(head,15);
    insertNode(head,14);
    insertNode(head,6);
    insertNode(head,32);
    printNode(head);

    

    Node* ans = removeNthFromEnd(head,9);
    printNode(ans);

    return 0;
}