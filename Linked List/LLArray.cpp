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

Node* insertionArray(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1; i<arr.size(); i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
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
    Node* head;
    vector<int>arr = {1,2,3,4,5};
    Node* res = insertionArray(arr);
    printNode(res);
    return 0;
}