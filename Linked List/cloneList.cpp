#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->random = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int d){
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}
//Approach 1 using map.
//TC - O(n).
//SC - O(n).
Node* cloneLinkedList(Node* head){

Node* cloneHead = NULL;
Node* cloneTail = NULL;

//Step 1 -> Create a clone list.

Node* temp = head;
while(temp != NULL){
    insertAtTail(cloneHead, cloneTail, temp->data);
    temp = temp->next;
}

//Step 2 -> Create  map for storing random pointer from original to clone.

unordered_map<Node*, Node*>oldToNew;

Node* originalNode = head;
Node* cloneNode = cloneHead;

while(originalNode != NULL){
    oldToNew[originalNode] = cloneNode;
    originalNode = originalNode->next;
    cloneNode = cloneNode->next;
}

//Step 3 -> Clone the random pointers.

originalNode = head;
cloneNode = cloneHead;

while(originalNode != NULL){
    cloneNode->random = oldToNew[originalNode->random];
    originalNode = originalNode->next;
    cloneNode = cloneNode->next;
}

//Step 4 -> Return cloneHead.

return cloneHead;

}

Node* cloneList(Node* head){

    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    //Step 1 -> Create a clone list.

    Node* temp = head;
    while(temp != NULL){
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

    //Step 2 -> cloneNode add in between originalNode.

    Node* originalNode = head;
    Node* cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL){
        Node* next = originalNode -> next;
        originalNode->next = cloneNode;
        originalNode = next;

        next = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = next;
    }

    //Step 3 -> Random pointer[cloneNode].

    temp = head;
    while(temp != NULL){
        if(temp->next != NULL){
            temp->next->random = temp->random ? temp->random->next : temp->random;
        }
        temp = temp->next->next;
    }

    //Step 4 -> Revert changes done in step 2
    
    originalNode = head;
    cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL){
        originalNode -> next = cloneNode -> next;
        originalNode = originalNode->next;

        if(originalNode != NULL){
            cloneNode -> next = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
    }

    //Step 5 -> Return cloneHead.

    return cloneHead;

}

void printNode(Node* head){
    while(head != NULL){
        cout<<head->data<<":";
        head->next != NULL ? cout<<head->next->data : cout<<"NULL";
        head->random != NULL ? cout<<","<<head->random->data : cout<<", NULL";
        cout<<endl;
        head = head->next;
    }
}

int main(){
    Node* head = NULL;

    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);

    head = node1;
    head->next = node2;
    head->next->next = node3;
    head->next->next->next = node4;
    head->next->next->next->next = node5;

    head->random = node3;
    head->next->random = node1;
    head->next->next->random = node5;
    head->next->next->next->random = node3;
    head->next->next->next->next->random = node2;

    cout<<"Original List : "<<endl;
    printNode(head);
    cout<<endl;
    cout<<"Clone List : \n";
    // Node* newHead = cloneLinkedList(head);
    // printNode(newHead);

    Node* ans = cloneList(head);
    printNode(ans);

    return 0;
}