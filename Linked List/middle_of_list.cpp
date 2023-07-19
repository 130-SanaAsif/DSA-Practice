#include<iostream>
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

void insert(Node* &head, int val){
    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }
    Node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node* &n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

//Brute Force Approach.
int getlen(Node* head){
    int len=0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

Node* middleNode(Node* head){
    int len = getlen(head);
    int ans = len/2;
    Node* temp = head;
    int cnt = 0;
    while(cnt < ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
}


//Optimised Approach.
//TC - O(n).
//SC - O(1).

Node* MiddleNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    else if(head->next == NULL){
        return head;
    }
    else if(head->next->next == NULL){
        return head->next;
    }
    Node*slow = head;
    Node*fast = head->next;
    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return head = slow;
}


int main(){
    Node* head = NULL;
    insert(head, 4);
    insert(head, 7);
    insert(head, 5);
    insert(head, 3);
    insert(head, 2);
    insert(head, 8);
    //Node* result = MiddleNode(head);
    Node* ans = middleNode(head);
    cout<<"Middle of list is "<<endl;
    display(ans);
    return 0;
}