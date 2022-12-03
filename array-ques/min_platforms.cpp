#include<iostream>
#include<algorithm>
using namespace std;

int minimumu_platforms(int arr[], int dep[], int n){
    sort(arr, arr+n);
    sort(dep,dep+n);

    int count = 0, ans = 0, i = 0, j = 0;
    while(i<n){
        if(arr[i] <= dep[j]){
            count++;
            ans = max(ans,count);
            i++;
        }else if(arr[i] > dep[j]){
            count--;
            j++;
        }
    }
    return ans;
}

int main(){
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = minimumu_platforms(arr,dep,n);
    cout<<res<<endl;
    return 0;
}