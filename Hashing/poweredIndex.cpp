#include<bits/stdc++.h>
using namespace std;

int poweredIndex(vector<int>&a){
    int n = a.size();
    map<pair<int,int>, int>mpp;
    for(int i=0; i<n; i++){
        mpp[{a[i], i%a[i]}]++;
    }
    int ans = 0;
    for(auto it:mpp){
        ans += (it.second)*(it.second-1);
    }
    return ans;
}

int main(){
    vector<int>a = {2,2,2,2,2};
    int res = poweredIndex(a);
    cout<<res;
    return 0;
}