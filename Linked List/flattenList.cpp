#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* child;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->child = NULL;
    }
};

int main(){
    Node* head = NULL;
    Node* node1 = new Node(1);
    Node* node2 = new Node(4);
    Node* node3 = new Node(7);
    Node* node4 = new Node(9);
    Node* node5 = new Node(20);

    head = node1;
    head->next = node2;
    head->next->next = node3;
    head->next->next->next = node4;
    head->next->next->next->next = node5;

    

}
