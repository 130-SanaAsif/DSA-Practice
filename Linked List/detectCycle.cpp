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

void insertSingle(Node* &head, int d){
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

void insertCircular(Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        head->next = head;
        return;
    }
    else{
        Node* newNode = new Node(d);
        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void printSingle(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void printCircular(Node* &head){
    Node* temp = head;
    do{
        cout<<head->data<<"->";
        head = head->next;
    } while (head != temp);

    cout<<head->data<<endl;
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool>visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true){
            cout<<"Loop is present on "<<temp->data<<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main(){
    Node* head = NULL;
    //Cicular linked list
    // insertCircular(head, 4);
    // insertCircular(head, 5);
    // insertCircular(head, 6);
    // insertCircular(head, 7);
    // insertCircular(head, 8);
    // printCircular(head);

    //Singly linked list.
    insertSingle(head,6);
    insertSingle(head,5);
    insertSingle(head,7);
    insertSingle(head,9);
    insertSingle(head,1);
    printSingle(head);

    if(detectLoop(head)){
        cout<<"Loop is present"<<endl;
    }
    else{
        cout<<"Loop is absent"<<endl;
    }
}