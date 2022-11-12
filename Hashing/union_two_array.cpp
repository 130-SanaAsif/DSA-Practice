#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
//Union of two array.
//a = {5, 10, 15, 4, 5, 10}
//b = {4, 15, 3, 8, 10}
//(aUb) = {5, 4, 3, 15, 10, 8}
//ans = 6.
int UnionArray(const std::vector<int>&a, const std::vector<int>&b){
    unordered_set<int>s;
    for(int ele:a){
        s.insert(ele);
    }
    for(int ele:b){
        s.insert(ele);
    }
    return s.size();
}
int main(){
    vector<int>a = {5,10,15,4,5,10};
    vector<int>b = {4,15,3,8,10};
    int res = UnionArray(a,b);
    cout<<res;
    return 0;
}