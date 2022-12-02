#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool CheckTwoArrays(vector<int> A, vector<int> B, int N){
    unordered_map<int, int>mp;

    for(int i=0; i<N; i++){
        mp[A[i]]++;
    }

    for(int i=0; i<N; i++){
        if(mp.find(B[i]) == mp.end()){
            return false;
        }

        if(mp[B[i]] == 0){
            return false;
        }

        mp[B[i]]--;
    }
    return true;
}

int main(){
    vector<int>A = {3, 5, 2, 5, 2};
    vector<int>B = {2, 3, 5, 5, 2};
    int n = 5;
    bool res = CheckTwoArrays(A,B,n);
    cout<<res;
    return 0;
}