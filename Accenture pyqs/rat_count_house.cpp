#include<bits/stdc++.h>
using namespace std;

int ratCount(int r, int unit, int n, int arr[]){
    if(n == 0){
        return -1;
    }

    int require = r*unit;
    int sumFood = 0;
    int i;
    for(i=0; i<n; i++){
        sumFood += arr[i];
        if(sumFood >= require){
            break;
        }
    }

    if(sumFood < require){
        return 0;
    }
    
    return i+1;
}

int main(){
    int arr[] = {2,9,8,6,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = ratCount(6,2,n,arr);
    cout<<res<<endl;
    return 0;
}