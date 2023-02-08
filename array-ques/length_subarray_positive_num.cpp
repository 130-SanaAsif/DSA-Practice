#include<bits/stdc++.h>
using namespace std;

int maxLength(vector<int>&arr){
    int n = arr.size();
    int ans = 0, neg = -1, c = 0, start = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            start = i+1;
            c = 0;
            neg = -1;
        }
        else if(arr[i] < 0){
            c++;
            if(neg == -1){
                neg = i;
            }
        }
        if(c % 2){
            ans = max({ans,neg-start,i-neg});
        }
        else{
            ans = max(ans, i-start+1);
        }
    }
    return ans;
}

int main(){
    vector<int>arr = {0,1,-2,-3,-4};
    int res = maxLength(arr);
    cout<<res;
    return 0;
}