#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;
//Brute Force Approach
//TC - O(N^2).
//SC - O(1).
vector<int>major(vector<int>&arr){
    vector<int>ans;
    for(int i=0; i<arr.size();i++){
        int cnt = 1;
        for(int j = i+1; j<arr.size();j++){
            if(arr[j] == arr[i])
                cnt++;
        }

        if(cnt > arr.size()/3){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
//Better Solution.
//TC - O(N).
//SC - O(N).
vector<int>majority(vector<int>&arr){
    vector<int>ans;
    unordered_map<int,int>map;
    for(int i=0; i<arr.size();i++){
        map[arr[i]]++;
    }

    for(auto x : map){
        if(x.second > arr.size()/3){
            ans.push_back(x.first);
        }
    }
    return ans;
}
//Optimal Solution.
//TC - O(N).
//SC - O(1).
vector<int>majorityElement(vector<int>&arr){
    int num1 = -1, num2 = -1, cnt1 = 0, cnt2 = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == num1)
            cnt1++;
        else if(arr[i] == num2){
            cnt2++;
        }
        else if(cnt1 == 0){
            num1 = arr[i];
            cnt1 = 1;
        }
        else if(cnt2 == 0){
            num2 = arr[i];
            cnt2 = 1;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }

    vector<int>ans;
      cnt1 = cnt2 = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == num1){
            cnt1++;
        }
        else if(arr[i] == num2){
            cnt2++;
        }
    }

    if(cnt1 > arr.size()/3)
        ans.push_back(num1);
    
    if(cnt2 > arr.size()/3)
        ans.push_back(num2);
    
    return ans;
}
int main(){
    vector<int>arr = {1,1,1,3,3,2,2,2};
    //vector<int>m = major(arr);
    //vector<int>n = majority(arr);
    vector<int>x = majorityElement(arr);
    //cout<<"Brute Force Approach"<<endl;
    cout<<"The majority element is ";
    //set<int>s(m.begin(),m.end());
    //for(auto it : s){
      //  cout<<it<<" ";
    //}
    for(auto it:x){
        cout<<it<<" ";
    }
    return 0;
}