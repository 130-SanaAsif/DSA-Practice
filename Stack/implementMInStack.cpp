//Using approach 1.
//By using pair to store the value and minimum element till now.
//Time Complexity - O(1) ->for all stack operation.
//Space Complexity - O(2N) ->for using stack and storing the minimum element.
#include<iostream>
#include<stack>
#include<utility>
using namespace std;

class MinStack{
    stack<pair<int, int>>st;
    public:
    void PUSH(int x){
        int Min;
        if(st.empty()){
            Min = x;
        }
        else{
            Min = min(st.top().second, x);
        }

        st.push({x, Min});
    }

    void POP(){
        st.pop();
    }

    int TOP(){
        return st.top().first;
    }

    int getMin(){
        return st.top().second;
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
    cout<<"The top element in the stack is "<<m.TOP()<<endl;
    m.POP();
    cout<<"After popping the previous element from the stack the new top element is "<<m.TOP()<<endl;
    return 0;
}