#include<iostream>
#include<vector>
using namespace std;
//Using Binary Search
//Time Complexity - O(Log N)
//Space Complexity - O(1).
vector<int>SearchRange(vector<int>&arr, int key){
    vector<int>ans;
    int n = arr.size();
    // For first ocuurence of the given element.
    int lo = 0, hi = n-1 , res = -1;
    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(arr[mid] == key){
            res = mid;
            hi = mid-1;
        }
        else if(arr[mid] < key){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }

    //For last occurence of the given element.
    int low = 0, high = n-1, num = -1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == key){
            num = mid;
            low = mid+1;
        }
        else if(arr[mid] < key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    ans.push_back(res);
    ans.push_back(num);
    return ans;
}

int main(){
    vector<int>arr = {5,7,7,8,8,10};
    int key;
    cout<<"Key = ";
    cin>>key;
    vector<int> res;
    res = SearchRange(arr,key);
    for(int i=0; i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}