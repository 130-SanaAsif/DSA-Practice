#include<bits/stdc++.h>
using namespace std;

void func(int ind, vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds){
    ans.push_back(ds);
    
    for(int i=ind; i<arr.size(); i++){
        if(i != ind && arr[i] == arr[i-1]) continue;
        ds.push_back(arr[i]);
        func(i+1, arr, ans, ds);
        ds.pop_back();
    }
}

vector<vector<int>>subSetSum (vector<int>&arr){
    vector<vector<int>>ans;
    vector<int>ds;
    sort(arr.begin(), arr.end());
    func(0,arr,ans,ds);
    return ans;
}

int main(){
    vector<int>arr = {1,2,2};
    vector<vector<int>>ans = subSetSum(arr);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}