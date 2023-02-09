#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
    node* front;
    node* back;
    
    public:
    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        node* n = new node(x);
        if(back == NULL){
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void pop(){
        if(front == NULL){
            cout<<"Queue UnderFlow";
            return ;
        }
        
        node* todelete = front;
        front = front->next;

        delete todelete;
    }

    int peek(){
        if(front == NULL){
            cout<<"Queue UnderFlow";
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front == NULL){
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.push(34);
    q.push(35);
    q.push(36);
    q.push(37);
    q.push(38);

    cout<<"Elements in Queue:"<<endl;
    while(!q.empty()){
        cout<<q.peek()<<" ";
        q.pop();
    }
    cout<<endl;
    if(q.empty()){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}