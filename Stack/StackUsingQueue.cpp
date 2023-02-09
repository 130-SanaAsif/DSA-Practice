//Approach 1.
//Implementing stack using two queue.
//Time Complexity - O(N).
//Space Complexity - O(n){near about n as we are using two queues and for swapping}.
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

class stack{
    queue<int>q1;
    queue<int>q2;
    int n;

    public:
    stack(){
        n=0;
    }
    void push(int x){
        q2.push(x);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }

    int pop(){
        if(q1.empty()){
            return -1;
        }
        int val = q1.front();
        q1.pop();
        n--;
        return val;
    }
    
    int top(){
        if(q1.empty()){
            cout<<"NO ELEMENT IN STACK";
            return -1;
        }
        return q1.front();
    }

    int size(){
        return n;
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
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout<<"The top element in stack is "<<s.top()<<endl;
    cout<<"The size of the stack is "<<s.size()<<endl;
    s.pop();
    cout<<"Element present in the array"<<endl;
    while(s.size()){
        cout<<s.pop()<<endl;
    }
    return 0;
}