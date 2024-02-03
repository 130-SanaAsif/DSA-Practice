#include<bits/stdc++.h>
using namespace std;

//Approach 1.
//This will print all subsequence which is equal to sum k;
void SubKSum(int ind, vector<int>&ds, int s,int sum, int arr[], int n){
    if(ind == n){
        if(s == sum){
            for(int i=0; i<ds.size(); i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];
    SubKSum(ind+1, ds, s, sum, arr, n);
    ds.pop_back();
    s -= arr[ind];
    SubKSum(ind+1, ds, s, sum, arr, n);
}

//Approach 2.
//This will print only one subsequence which is equal to sum k.
bool SubKSum2(int ind, vector<int>&ds, int s, int sum, int arr[], int n){
    //Base Condition.
    if(ind == n){
        //Condition Satisfied.
        if(s == sum){
            for(int i=0; i<ds.size(); i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
            return true;
        }
        else{
            return false;
        }
    }

    ds.push_back(arr[ind]);
    s += arr[ind];

    if(SubKSum2(ind+1, ds, s, sum, arr, n) == true){
        return true;
    }

    ds.pop_back();
    s -= arr[ind];

    if(SubKSum2(ind+1, ds, s, sum, arr, n) == true){
        return true;
    }

    return false;
}

//Approach 3
// Count the number of subsequence of with sum k.

int countSub(int ind, int s, int sum, int arr[], int n){
    if(ind == n){
        if(s == sum){
            return 1;
        }
        else{
            return 0;
        }
    }

    s += arr[ind];
    int l = countSub(ind+1, s, sum, arr, n);
    s -= arr[ind];
    int r = countSub(ind+1, s, sum, arr, n);

    return l+r;
}
int main(){
    int arr[] = {1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 2;
    vector<int>ds;

    SubKSum(0,ds,0,sum,arr,n);

    int res = countSub(0,0, sum, arr, n);
    cout<<"Count of subsequence - "<<res<<endl;
    if(SubKSum2(0,ds,0,sum,arr,n)){
        return 1;
    }
    else{
        return 2;
    }

    
return 0;
}