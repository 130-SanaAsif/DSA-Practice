#include<iostream>
#include<stack>
using namespace std;


class queue{
    stack<int>s1;
    stack<int>s2;

    public:
    void push(int x){
    
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        
        s1.push(x);

        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    
    }

    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Error";
            return -1;
        }
        if(s2.empty()){
            while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }

     int peek(){
        if(s1.empty()){
            cout<<"Stack is empty";
            return -1;
        }
        return s1.top();
    }

    bool empty(){
        if(s1.empty() and s2.empty()){
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<"The top element is "<<q.peek()<<endl;
    q.pop();
    cout<<"The element in queue"<<endl;
    while(!q.empty()){
        cout<<q.pop()<<endl;
    }
    return 0;
}