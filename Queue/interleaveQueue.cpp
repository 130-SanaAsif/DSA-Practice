#include<bits/stdc++.h>
using namespace std;

vector<int> reaarangeQueue(queue<int>q){
    vector<int>ans;
    queue<int>q1;

    int n = q.size()/2;

    while(n--){
        q1.push(q.front());
        q.pop();
    }

    while(!q1.empty() && !q.empty()){
        int val = q1.front();
        q1.pop();
        ans.push_back(val);

        int val1 = q.front();
        q.pop();
        ans.push_back(val1);
    }

    return ans;
}


int main(){
    queue<int>q;
    vector<int>arr = {11,12,13,14,15,16,17,18};

    for(int i=0; i<arr.size(); i++){
        q.push(arr[i]);
    }

    vector<int>ans = reaarangeQueue(q);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

return 0;
}