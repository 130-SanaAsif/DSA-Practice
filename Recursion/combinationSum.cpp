#include<bits/stdc++.h>
using namespace std;

void solve(int ind, int target, vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds){
    if(ind == arr.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }

    if(arr[ind] <= target){
        ds.push_back(arr[ind]);
        solve(ind, target-arr[ind], arr, ans, ds);
        ds.pop_back();
    }

    solve(ind+1, target, arr, ans, ds);
}

vector<vector<int>>findCombination(vector<int>&arr, int target){
    vector<vector<int>>ans;
    vector<int>ds;
    int ind = 0;
    solve(ind, target, arr, ans, ds);
    return ans;
}

int main(){
    vector<int>arr = {2,3,6,7};
    int target = 7;
    cout<<"The Combination Sum : "<<endl;
    vector<vector<int>> ans = findCombination(arr,target);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}