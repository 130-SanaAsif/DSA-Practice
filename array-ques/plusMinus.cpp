#include<bits/stdc++.h>
using namespace std;

void plusMinus(vector<int>&arr){
    int n = arr.size();
    double pos = 0, neg = 0, zero = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            zero++;
        }
        else if(arr[i] > 0){
            pos++;
        }
        else{
            neg++;
        }
    }
    
    cout<<fixed<<setprecision(6)<<double(pos/n)<<endl;
    cout<<fixed<<setprecision(6)<<double(neg/n)<<endl;
    cout<<fixed<<setprecision(6)<<double(zero/n)<<endl;
    //cout<<n;
    //cout<<pos<<" "<<neg<<" "<<zero<<endl;
}

int main(){
    vector<int>arr = {-4,3,-9,0,4,1};
    plusMinus(arr);
    return 0;
}