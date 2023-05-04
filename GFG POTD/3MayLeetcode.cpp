#include<bits/stdc++.h>
using namespace std;

vector<int>getElements(vector<int>&nums1, vector<int>&nums2){
    unordered_set<int>onlyInNums1;
    unordered_set<int>existsInNums2;

    for(int num:nums2){
        existsInNums2.insert(num);
    }
    for(int num:nums1){
        if(existsInNums2.find(num) == existsInNums2.end()){
            onlyInNums1.insert(num);
        }
    }
    return vector<int>(onlyInNums1.begin(),onlyInNums1.end());
}
vector<vector<int>>findDifferent(vector<int>&nums1, vector<int>&nums2){
    return {getElements(nums1,nums2),getElements(nums2,nums1)};
}

int main(){
    vector<int>a = {1,2,3};
    vector<int>b = {2,4,6};
    vector<vector<int>>ans;
    ans = findDifferent(a,b);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}