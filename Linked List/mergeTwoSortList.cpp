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

void printNode(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* solve(Node* &head1, Node* &head2){
    //Casr for one data in head1 list.
    if(head1->next == NULL){
        head1->next = head2;
        return head1;
    }

    Node* cur1 = head1;
    Node* next1 = cur1->next;
    Node* cur2 = head2;
    Node* next2 = cur2->next;

    while(next1 != NULL && cur2 != NULL){
        if((cur2->data >= cur1->data) && (cur2->data <= next1->data)){
            cur1->next = cur2;
            next2 = cur2->next;
            cur2->next = next1;

            cur1 = cur2;
            cur2 = next2;
        }
        else{
            cur1 = next1;
            next1 = next1->next;
            if(next1 == NULL){
                cur1->next = cur2;
                return head1;
            }
        }
    }
    return head1;
}
Node* mergeSortList(Node* head1, Node* head2){
    if(head1 == NULL){
        return head2;
    }

    if(head2 == NULL){
        return head1;
    }

    if(head1->data <= head2->data){
        return solve(head1,head2);
    }
    else{
        return solve(head2,head1);
    }
}

Node* recursion(Node* head1, Node* head2){
    if(head1 == NULL){
        return head2;
    }

    if(head2 == NULL){
        return head1;
    }

    if(head1->data <= head2->data){
        head1->next = recursion(head1->next,head2);
        return head1;
    }
    else{
        head2->next = recursion(head1,head2->next);
        return head2;
    }
}

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;
    insertNode(head1,1);
    insertNode(head1,4);
    insertNode(head1,5);
    printNode(head1);
    insertNode(head2,2);
    insertNode(head2,3);
    insertNode(head2,5);
    insertNode(head2,6);
    printNode(head2);

    // Node* res = mergeSortList(head1,head2);
    // printNode(res);

    Node* ans = recursion(head1,head2);
    printNode(ans);

    return 0;
}