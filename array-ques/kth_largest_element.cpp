#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int kth_largest(vector<int>&arr,int k){
     priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }
    for(int i=k; i<arr.size(); i++){
        if(pq.top() < arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}
int main(){
    vector<int>arr = {20,10,60,30,50,40};
    
    int k = 3;
    int res = kth_largest(arr,k);
    cout<<res;
    return 0;
}