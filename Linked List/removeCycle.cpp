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

void insertNode(Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        return ;
    }
    else{
        Node* newNode = new Node(d);
        Node* temp = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

void printList(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* startNodeLoop(Node* head){
    Node* slow = head;
    Node* fast= head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            slow = head;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }
    Node* start = startNodeLoop(head);
    Node* temp = start;
    while(temp->next != start){
        temp = temp->next;
    }
    temp->next = NULL;
}


int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    insertNode(tail, 12);
    insertNode(tail, 15);
    insertNode(tail, 18);
    insertNode(tail, 23);
    insertNode(tail, 28);
    insertNode(tail, 32);

    tail->next = head->next->next;

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->next->data<<endl;

    Node* res = startNodeLoop(head);

    cout<<"Start node of loop "<<res->data<<endl;

    removeLoop(head);
    printList(head);

    return 0;
}