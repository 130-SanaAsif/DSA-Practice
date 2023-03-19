#include<bits/stdc++.h>
using namespace std;

void printArray(vector<vector<int>>&arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<vector<int>>mergeOverlappinInterval(vector<vector<int>>&interval){
    vector<vector<int>>temp;
    if(interval.size() == 0){
        return temp;
    }
    vector<int>v = interval[0];
    for(int i=0; i<interval.size(); i++){
        if(interval[i][0] <= v[1]){
            v[1] = max(interval[i][1],v[1]);
        }
        else{
            temp.push_back(v);
            v = interval[i];
        }
    }
    temp.push_back(v);
    return temp;
}

int main(){
    vector<vector<int>>arr = {{1,3},{2,6},{8,10},{8,9},{9,11},{15,18},{2,4},{16,17}};
    vector<vector<int>>res;
    res = mergeOverlappinInterval(arr);
    printArray(res);
}