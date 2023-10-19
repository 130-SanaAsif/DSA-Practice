#include<bits/stdc++.h>
using namespace std;

class SpecialStack{
public:
    stack<int>st1;
    stack<int>st2;
    int mini = INT_MAX;

    void push(int data){
        st1.push(data);
        int curr = st1.top();
        mini = min(mini,curr);
        //cout<<mini<<endl;
        st2.push(mini);
    }

    int getMin(){
        if(st1.empty()){
            return -1;
        }
        int ans = st2.top();
        return ans;
    }

    void pop(){
        if(st1.empty() || st2.empty()){
            cout<<"Stack Underflow"<<endl;
        }
        st1.pop();
        st2.pop();

        mini = INT_MAX;
    }

    int top(){
        int ans = st1.top();
        return ans;
    }

};
int main(){
    SpecialStack s;
    s.push(45);
    s.pop();
    s.push(53);
    cout<<s.getMin()<<endl;
    // s.push(46);
    // cout<<s.getMin()<<endl;
    // s.pop();
    // cout<<s.getMin()<<endl;
    // int ans = s.getMin();
    // cout<<ans<<endl;

return 0;
}