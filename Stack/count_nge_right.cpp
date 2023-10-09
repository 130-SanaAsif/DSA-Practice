#include<bits/stdc++.h>
using namespace std;

int func(int a, vector<int>&arr){
    int cnt = 0;
    for(int i=a+1; i<arr.size(); i++){
        if(arr[a] < arr[i]){
            cnt++;
        }
    }
    return cnt;
}

vector<int>countGreater(vector<int>&arr, vector<int>&query){
    vector<int>ans;

    for(int i=0; i<query.size(); i++){
        ans.push_back(func(query[i], arr));
    }
    return ans;
}

int main(){
    vector<int>arr = {5,2,3,10,4};
    vector<int>brr = {0,1};

    vector<int>ans = countGreater(arr,brr);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}