#include<bits/stdc++.h>
using namespace std;

void subSequence(int ind, vector<int>&arr, vector<int>&ans,vector<int>&sumArr, int n, int sum){
    if(ind == n){
        for(int i=0; i<ans.size(); i++){
            sum += ans[i];
        }
        sumArr.push_back(sum);
        return;
    }

    ans.push_back(arr[ind]);
    subSequence(ind+1, arr,ans,sumArr,n,sum);
    ans.pop_back();
    subSequence(ind+1, arr,ans,sumArr,n,sum);
}

void solve(int i, vector<int>&arr, vector<int>&ds, int n, int sum){
    if(i == n){
        ds.push_back(sum);
        return;
    }

    //Pick 
    solve(i+1, arr,ds,n,sum+arr[i]);
    //Non-pick.
    solve(i+1,arr,ds,n,sum);
}

vector<int>subsetSum(vector<int>&arr){
    vector<int>ans;
    vector<int>sum;
    int n = arr.size();
    // subSequence(0, arr,ans,sum,n,0);
    solve(0,arr,ans,n,0);
    //sort(sum.begin(), sum.end());
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int>arr = {1,2};

    vector<int>ans = subsetSum(arr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

return 0;
}