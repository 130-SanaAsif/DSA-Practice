#include<bits/stdc++.h>
using namespace std;

void f(int ind, int k, int n, vector<vector<int>>&ans, vector<int>&ds){
    if(k == 0){
        if(n == 0){
            ans.push_back(ds);
            return;
        }
    }

    for(int i=ind; i<=9; i++){
        ds.push_back(i);
        f(i+1, k-1, n-i, ans, ds);
        ds.pop_back();
    }
}

vector<vector<int>>combinationSumIII(int k, int n){
    vector<vector<int>>ans;
    vector<int>ds;
    f(1,k,n,ans,ds);
    return ans;
}
int main(){
    int k = 3, n = 7;
    vector<vector<int>>ans = combinationSumIII(k,n);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
return 0;
}