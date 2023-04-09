#include<bits/stdc++.h>
using namespace std;
//using vextor.
vector<int> makeBeautiful(vector<int>&arr){
    vector<int>ans;
    for(int i=0; i<arr.size(); i++){
        if(ans.size() == 0){
            ans.push_back(arr[i]);
        }
        else{
            if((ans.back()>0 && arr[i]<0) || (ans.back()<0 && arr[i]>0) || (ans.back()==0 && arr[i]<0) || (arr[i]==0 && ans.back()<0)){
                ans.pop_back();
            }
            else{
                ans.push_back(arr[i]);
            }
        }
    }
    return ans;
}
//using stack.
vector<int> beautifulWithStack(vector<int>&arr){
    stack<int>s1;
    for(int i=0; i<arr.size(); i++){
        if(s1.empty()){
            s1.push(arr[i]);
        }
        else{
            if((s1.top()>=0 && arr[i]<0) || (s1.top()<0 && arr[i]>=0)){
                s1.pop();
            }
            else{
                s1.push(arr[i]);
            }
        }
    }
    vector<int>ans;
    while(!s1.empty()){
        ans.push_back(s1.top());
        s1.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>arr = {4,3,2,-2,-1,5};
    vector<int>res;
    //res = makeBeautiful(arr);
    res = beautifulWithStack(arr);
    for(int i=0; i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}