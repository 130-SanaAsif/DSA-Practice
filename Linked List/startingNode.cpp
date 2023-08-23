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
        return;
    }
    else{
        Node* newNode = new Node(d);
        tail->next = newNode;
        tail = newNode;
    }
}

Node* floydCycle(Node* head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        return NULL;
    }
    Node* fast = head;
    Node* slow = head;
    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            cout<<"Intersection Point "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* startNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersect = floydCycle(head);
    Node* slow = head;
    
    while(slow != intersect){
        slow = slow->next;
        intersect = intersect->next;
    }
    return slow;
}


Node* detectNode(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(slow == fast){
            cout<<"Intersect at "<<slow->data<<endl;
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
int main(){
    Node* node1 = new Node(10);
    Node* head  = node1;
    Node* tail = node1;

    insertNode(tail,12);
    insertNode(tail,14);
    insertNode(tail,60);
    insertNode(tail,78);
    insertNode(tail,16);
    insertNode(tail,19);
    insertNode(tail,18);
    insertNode(tail,21);
    tail->next = head->next->next->next->next;

    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->next->data<<endl;

    Node* res = detectNode(head);

    cout<<"Starting Node is "<<res->data<<endl;
    return 0;
}