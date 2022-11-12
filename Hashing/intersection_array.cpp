#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int IntersectionArray(const std::vector<int>&a, const std::vector<int>&b){
    unordered_set<int>s;
    int cnt = 0;
    for(int x:a){
        s.insert(x);
    }
    for(int x : b){
        if(s.count(x)){
            cnt++;
            s.erase(x);
        }
    }
    return cnt;
}

int main(){
    vector<int>a = {5,10,15,4,7,10};
    vector<int>b = {3, 5, 10, 15, 7};
    //(a)intersects(b) = {5, 10, 15}
    int res = IntersectionArray(a, b);
    cout<<res;
    return 0;
}