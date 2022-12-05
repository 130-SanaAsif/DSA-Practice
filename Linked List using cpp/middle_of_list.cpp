#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
};

void diplay(Node*n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}
Node* MiddleNode(Node*head){
    Node*slow = head;
    Node*fast = head;
    while(fast != NULL && fast != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main(){
    Node*head = NULL;
    Node*second = NULL;
    Node*third = NULL;
    Node*fourth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;
    MiddleNode(head);
    diplay(head);
    return 0;
}