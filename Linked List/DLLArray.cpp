#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void printNode(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* insertArray(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1; i<arr.size(); i++){
        
        Node* nodeToInsert = new Node(arr[i]);
        temp->next = nodeToInsert;
        nodeToInsert->prev = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7};
    Node* res = insertArray(arr);
    printNode(res);
    return 0;
}