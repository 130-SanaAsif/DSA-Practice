#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int>s1;
    stack<int>s2;
    public:
    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s2.empty()){
            while(s1.size()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        int topval = s2.top();
        s2.pop();
        return topval;
    }

    int top(){
        if (s2.empty())
      while (s1.size())
        s2.push(s1.top()), s1.pop();
    return s2.top();
    }

    bool empty(){
        if (s1.empty() and s2.empty())
        {
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
    cout << "The top element is " << q.top() << endl;
    q.pop();
    cout << "The element in queue" << endl;
    while (!q.empty())
    {
        cout << q.pop() << endl;
    }
    return 0;
}