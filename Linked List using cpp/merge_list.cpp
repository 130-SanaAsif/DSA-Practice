#include<iostream>
using namespace std;
struct Node{
    int val;
    Node*next;
};

void display(Node*n){
    while(n != NULL){
        cout<<n->val<<"->";
        n = n->next;
    }
    cout<<"NULL"<<endl;
}

void display(Node*n){
    while(n != NULL){
        cout<<n->val<<"->";
        n = n->next;
    }
    cout<<"NULL"<<endl;
}

Node* mergeLinkedList(Node*l1, Node*l2){
    if(l1==NULL){
        return l2;
    }
    if(l2 == NULL){
        return l1;
    }
    
    if(l1->val <=l2->val){
        l1->next = mergeLinkedList(l1->next, l2);
        return l1;
    }
    else{
        l2->next = mergeLinkedList(l1, l2->next);
        return l2;
    }
}
int main(){
    Node*l1 = NULL;
    Node*l2 = NULL;
    int arr[] = {1,2,3};
    int arr1[] = {4,5,6};
    //display(l1);
    //display(l2);
}