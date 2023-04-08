#include<bits/stdc++.h>
using namespace std;

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

int main(){
    vector<int>arr = {4,2,-2,1};
    vector<int>res;
    res = makeBeautiful(arr);
    for(int i=0; i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}