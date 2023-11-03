#include<bits/stdc++.h>
using namespace std;

queue<int>reverseQueueInK(queue<int>q, int k){
    stack<int>st;

    //to fetch k elements from queue ans put into the stack.
    for(int i=0; i<k; i++){
        int val = q.front();
        q.pop();
        st.push(val);
    }

    //to fetch element from stack ans put into queue.
    while(!st.empty()){
        int val = st.top();
        st.pop();
        q.push(val);
    }

    int t = q.size()-k;
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}

int main(){
    vector<int>arr = {4,5,7,9,1,7};
    int k = 3;

    queue<int>q;
    for(int i=0; i<arr.size(); i++){
        q.push(arr[i]);
    }

    queue<int>ans = reverseQueueInK(q,k);
    while (!ans.empty())
    {
        cout<<ans.front()<<" ";
        ans.pop();
    }
    
return 0;
}