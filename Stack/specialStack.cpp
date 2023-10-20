#include<bits/stdc++.h>
using namespace std;

//Optimal Approach.
// TC - O(1).
// SC - O(N).
// class SpecialStack{
// public:
//     stack<int>st1;
//     stack<int>st2;

//     void push(int data){
//         if(st1.empty() && st2.empty()){
//             st1.push(data);
//             st2.push(data);
//         }
//         else{
//             st1.push(data);
//             st2.push(min(data,st1.top()));
//         }
//     }

//     int getMin(){
//         if(st1.empty()){
//             return -1;
//         }
//         int ans = st2.top();
//         return ans;
//     }

//     void pop(){
//         if(st1.empty() || st2.empty()){
//             cout<<"Stack Underflow"<<endl;
//         }
//         st1.pop();
//         st2.pop();
//     }

//     int top(){
//         int ans = st1.top();
//         return ans;
//     }

// };

//Space Optimise Approach.

class SpecialStack{
    public:
        stack<int>s;
        int mini;

        void push(int data){
            if(s.empty()){
                s.push(data);
                mini = data;
            }
            else{
                if(data < mini){
                    int val = 2*data - mini;
                    s.push(val);
                    mini = data;
                }
                else{
                    s.push(data);
                }
            }
        }

        void pop(){
            int curr = s.top();
            if(curr > mini){
                s.pop();
            }
            else{
                int val = 2*mini - curr;
                mini = val;
                s.pop();
            }
        }

        int top(){
            if(s.empty()){
                return -1;
            }

            int curr = s.top();
            if(curr < mini){
                return mini;
            }
            else{
                return curr;
            }
        }

        int getMin(){
            if(s.empty()){
                return -1;
            }
            return s.top();
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