#include<bits/stdc++.h>
using namespace std;

int floor1(vector<int>arr, int x){
    int n = arr.size();
    int ans = -1;
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] <= x){
            ans = arr[mid];
            low = mid+1;
        }
        else{
            high = mid+1;
        }
    }
    cout<<"Floor Executed"<<endl;
    return ans;
}

int ceil1(vector<int>arr, int x){
    int n = arr.size();
    int ans = -1;
    int low = 0;
    int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = arr[mid];
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout<<"Ceil Executed"<<endl;
    return ans;
}

vector<int>floorCeil(vector<int>&arr, int x){
    vector<int>ans;
    int res1 = floor1(arr,x);
    int res2 = ceil1(arr,x);

    ans.push_back(res1);
    ans.push_back(res2);

    cout<<"FLOORCEIL"<<endl;
    return ans;
}

int main(){
    vector<int>arr = {3,4,4,7,8,10};
    int x = 8;

 //   pair<int,int>ans = floorCeil(arr,x);
 //   cout<<ans.first<<" "<<ans.second<<endl;

 vector<int>ans = floorCeil(arr,x);
 for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
 }
return 0;
}