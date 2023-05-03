#include<bits/stdc++.h>
using namespace std;

double average(vector<int>&salary){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int sum = 0;
    for(int num:salary){
        sum+=num;
        maxi = max(maxi,num);
        mini = min(mini,num);
    }
    return (double)(sum-maxi-mini)/(double)(salary.size()-2);
}
int main(){
    vector<int>arr = {4000,3000,1000,2000};
    double res = average(arr);
    cout<<res;
    return 0;
}