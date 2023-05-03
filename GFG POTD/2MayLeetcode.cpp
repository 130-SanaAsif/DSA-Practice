//Sign of the product of an array.
#include<bits/stdc++.h>
using namespace std;

//Approach 1.
//Time Complexity - O(n).
//Space Complexity - O(1).
int product(vector<int>&arr){
    int cnt = 0;
    for(int x:arr){
        if(x < 0){
            cnt++;
        }
        if(x == 0){
            return 0;
        }
    }
    return cnt %2 == 0?1:-1;
}

//Approach 1.
//Time Complexity - O(n).
//Space Complexity - O(1).
int arraySign(vector<int>&nums){
    int sign=1;
    for(int x:nums){
        if(x == 0){
            return 0;
        }
        if(x < 0){
            sign = -1 * sign;
        }
    }
    return sign;
}
int main(){
    vector<int>arr ={9,72,34,29,-49,-22,-77,-17,-66,-75,-44,-30,-24};
    int res = product(arr);
    cout<<"Approach 1"<<endl;
    cout<<res<<endl;
    int ans = arraySign(arr);
    cout<<"Approach 2"<<endl;
    cout<<ans;
    return 0;
}