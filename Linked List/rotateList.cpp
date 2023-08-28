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
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

//Brute Force Approach.
//TC - O(n*k).
//SC - O(1).

Node* rotateList(Node* head, int k){
    if(head ==  NULL || head->next == NULL){
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL && k != 0){
        if(temp->next == NULL){
            prev->next = temp->next;
            temp->next = head;
            head = temp;
            k--;
        }
        else{
            prev = temp;
            temp = temp->next;
        }
    }

    return temp;
}

//Optimal Solution.
//TC - O(N).
//SC - O(1).

Node* rotateListInK(Node* head, int k){
    if(head == NULL || head->next == NULL || k == 0){
        return head;
    }
    
    Node* temp = head;
    //Step 1 -> Find the length of list.
    int len = 1;
    while(temp->next != NULL){
        len++;
        temp = temp->next;
    }

    //Step 2 -> points temp->next = head;
    temp->next = head;

    //Step 3 -> find how many times we need to rotate a list.
    k = k%len;
    k = len-k;

    while(k--){
        temp = temp->next;
    }

    head = temp->next;
    temp->next = NULL;
    return head;
}

int main(){
    Node* head = NULL;

    insertNode(head,0);
    insertNode(head,2);
    insertNode(head,3);
    // insertNode(head,4);
    // insertNode(head,5);
    printNode(head);

    // Node* res = rotateList(head,4);
    // printNode(res);

    Node* ans =rotateListInK(head,20);
    printNode(ans);

    return 0;
}