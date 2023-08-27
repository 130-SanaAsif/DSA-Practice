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

Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* merge(Node* left, Node* right){
    if(!left){
        return right;
    }
    if(!right){
        return left;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;

    while(left && right){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while(left){
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while(right){
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    return ans;
}

Node* mergeSort(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* mid = findMid(head);

    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    Node* result = merge(left,right);
    return result;
}

int main(){
    Node* head = NULL;

    insertNode(head,4);
    insertNode(head,2);
    insertNode(head,1);
    insertNode(head,3);
    //insertNode(head,9);
    printNode(head);

    Node* res = mergeSort(head);
    printNode(res);

    return 0;
}