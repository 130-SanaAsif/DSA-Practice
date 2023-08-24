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

Node* reverseNode(Node* head){
    Node* cur = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(cur != NULL){
        forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forward;
    }
    head = prev;
    return head;
}

void insertAtTail(Node* &head, Node* &tail, int val){
    Node* temp = new Node(val);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}

Node* add(Node* first, Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first != NULL || second != NULL || carry != 0){
        int val1 = 0;
        if(first != NULL){
            val1 = first->data;
        }

        int val2 = 0;
        if(second != NULL){
            val2 = second->data;
        }

        int sum = carry+val1+val2;
        int digit = sum%10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum/10;

        if(first != NULL){
            first = first->next;
        }

        if(second != NULL){
            second = second->next;
        }
    }
    return ansHead;
}

Node* addTwoList(Node* first, Node* second){
    //step 1 = Reverse Linked List.
    first = reverseNode(first);
    second = reverseNode(second);

    //step 2 = Add 2 list.
    Node* ans = add(first, second);

    //step 3 = Reverse ans and return.
    ans = reverseNode(ans);

    return ans;
}

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;
    insertNode(head1, 1);
    insertNode(head1,9);
    insertNode(head1,10);
    insertNode(head1,11);
    printNode(head1);

    insertNode(head2,2);
    insertNode(head2,5);
    insertNode(head2,12);
    // insertNode(head2,9);
    printNode(head2);

    Node* res = addTwoList(head1,head2);
    printNode(res);

    return 0;
}