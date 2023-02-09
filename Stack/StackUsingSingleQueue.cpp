//Optimized Approach.
//Implementing Stack using single queue.
//Time Complexity - O(N).
//Space Complexity - O(N).
#include<iostream>
#include<queue>
using namespace std;

class stack{
queue<int>q1;
public:
    void push(int x){
        int s = q1.size();
        q1.push(x);
        for(int i=0; i<s; i++){
            q1.push(q1.front());
            q1.pop();
        }
    }

    int top(){
        if(q1.empty()){
            cout<<"NO ELEMENT IN STACK";
            return -1;
        }

        return q1.front();
    }

    int pop(){
        if(q1.empty()){
            return -1;
        }
        int val = q1.front();
        q1.pop();
        return val;
    }

    int size(){
        return q1.size();
    }

    bool empty(){
        if(q1.empty()){
            return true;
        }
        return false;
    }
};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"Top element in stack is "<<s.top()<<endl;
    cout<<"Size of stack is "<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}