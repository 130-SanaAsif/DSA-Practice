#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int countDistint(const std::vector<int> &a){
    unordered_set<int>s;
    for(int ele:a){
        s.insert(ele);
    }
    return s.size();
}
int main(){
    vector<int>a = {5,10,4,5,15,4,3};
    int res = countDistint(a);
    cout<<res;
    return 0;
}