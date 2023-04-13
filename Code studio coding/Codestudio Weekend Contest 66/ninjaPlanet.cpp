#include<bits/stdc++.h>
using namespace std;

vector<int>ninjaplanet(int k, int q,int n, vector<int>&sheild){
    vector<int>health(n,k-q);
    for(int i=0;i<q;i++){
        if(sheild[i] > 0) health[sheild[i]-1]++;
    }
    vector<int>ans(n,0);
    for(int i=0; i<n; i++){
        if(health[i]>0) ans[i]=1;
    }
    return ans;
}

int main(){
    vector<int>shld ={1,1};
    vector<int>ans = ninjaplanet(2,2,3,shld);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}