#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack{
    int top;
public:
        int a[MAX];
        Stack(){
            top = -1;
        }
        bool push(int x);
        int pop();
        int peek();
        bool isempty();
};

bool Stack::push(int x){
    if(top >= (MAX-1)){
        cout<<"Stack OverFlow";
        return false;
    }
    else{
        a[++top] = x;
        cout<<x<<" pushed into stack.\n";
        return true;
    }
}

int Stack::pop(){
    if(top < 0){
        cout<<"Stack UnderFlow";
        return 0;
    }
    int x = a[top--];
    return x;
}

int Stack::peek(){
    if(top < 0){
        cout<<"Stack is empty";
        return 0;
    }
    int x = a[top];
    return x;
}

bool Stack::isempty(){
    return(top<0);
}

int main(){
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.pop()<<" popped from stack\n";
    cout<<"Elements present in the stack\n";
    while(!s.isempty()){
        cout<<s.peek()<<" ";
        s.pop();
    }
    return 0;
}