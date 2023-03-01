#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Sum(vector<int>&arr){
    sort(arr.begin(), arr.end());
    vector<vector<int>>res;
    for(int i=0; i<arr.size()-2; i++){
        if(i==0 || (i > 0 && arr[i] != arr[i-1])){
            int lo = i+1, hi = arr.size()-1, sum = 0-arr[i];
        
            while(lo < hi){
                if(arr[lo] + arr[hi] == sum){
                    vector<int>temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[lo]);
                    temp.push_back(arr[hi]);
                    res.push_back(temp);

                    while(lo<hi && arr[lo] == arr[lo+1]) lo++;
                    while(lo<hi && arr[hi] == arr[hi-1]) hi--;
                    lo++,hi--;
                }
                else if(arr[lo] + arr[hi] < sum) lo++;
                else hi--;
            }
        }
    }
    return res;
}

int main(){
    vector<int>arr = {-1,0,1,2,-1,-4};
    vector<vector<int>>res = Sum(arr);
    for(int i=0; i<res.size();i++){
        for(int j=0; j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}