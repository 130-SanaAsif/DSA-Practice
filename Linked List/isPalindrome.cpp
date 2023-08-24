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
//Approach 2 by reversing half of the list.
//TC - O(n).
//SC - O(1).

Node* middleNode(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node* reverseNode(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
    return head;
}

bool checkPalindrome(Node* head){
    if(head->next == NULL){
        return true;
    }

    Node* mid = middleNode(head);

    Node* temp = mid->next;
    mid->next = reverseNode(temp);

    Node* head1 = head;
    Node* head2 = mid->next;

    while(head2->next != NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    temp = mid->next;
    mid->next = reverseNode(temp);

    return true;
}

//Approach 1 using extra array.
//TC - O(n).
//SC - O(n). Because we are using extra space by creating array
bool reverseArr(vector<int>arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    while(s <= e){
        if(arr[s] != arr[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
bool isPalindrome(Node* head){
    if(head->next == NULL){
        return false;
    }
    vector<int>arr;
    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }

    return reverseArr(arr);
}

int main(){
    Node* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,2);     
    insertNode(head,1);
    printNode(head);

    // Node* res = reverseNode(head);
    // printNode(res);

    if(checkPalindrome(head)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}