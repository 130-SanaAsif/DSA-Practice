//Approach 2.
//Time Complexity - O(1).
//Space Complexity - O(N).
#include<bits/stdc++.h>
using namespace std;

class MinStack{
    stack<long long>st;
    long long mini;

    public:
    MinStack(){
        while(st.empty() == false){
            st.pop();
        }
        mini = INT_MAX;
    }

    void PUSH(int value){
        long long val = value;
    if (st.empty()) {
      mini = val;
      st.push(val);
    } else {
      if (val < mini) {
        st.push(2 *val*1LL - mini);
        mini = val;
      } else {
        st.push(val);
      }
    }
  }

  void pop() {
    if (st.empty()) return;
    long long el = st.top();
    st.pop();

    if (el < mini) {
      mini = 2 * mini - el;
    }
  }

  int top() {
    if (st.empty()) return -1;

    long long el = st.top();
    if (el < mini) return mini;
    return el;
  }

  int getMin() {
    return mini;
  }
};

int main(){
    MinStack m;
    m.PUSH(-2);
    m.PUSH(0);
    m.PUSH(-3);
    m.PUSH(-10);
    m.PUSH(10);
    cout<<"The minimum element in stack is "<<m.getMin()<<endl;
    cout<<"The top element in the stack is "<<m.top()<<endl;
    m.pop();
    cout<<"After popping the previous element from the stack the new top element is "<<m.top()<<endl;
    return 0;
}