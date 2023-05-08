#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach.
//Time Complexity - O(n).
//Space Complexity - O(1).
int kthElement(int arr1[], int arr2[], int n, int m, int k){
    int p1=0, p2=0, cnter=0, ans=0;

    while(p1<n && p2<m){
        if(cnter == k) break;
        else if(arr1[p1] < arr2[p2]){
            ans = arr1[p1];
            ++p1;
        }
        else{
            ans = arr2[p2];
            ++p2;
        }
        ++cnter;
    }
     if(cnter != k){
        if(p1 != n-1){
            ans = arr1[k-cnter];
        }
        else{
            ans = arr2[k-cnter];
        }
    }
    return ans;
}

//Optimised Approach using binary search.
//Time Complexity - O(log(min(n,m))).
//Space Complexity - O(1).
int KthElement(int arr1[], int arr2[], int n, int m, int k){
    if(m > n){
        return KthElement(arr2,arr1,n,m,k);
    }
    int low = max(0,k-m), high = min(k,n);
    while(low <= high){
        int cut1 = (low+high) >> 1;
        int cut2 = k-cut1;
        int l1 = cut1 == 0 ? INT_MIN:arr1[cut1-1];
        int l2 = cut2 == 0 ? INT_MIN:arr2[cut2-1];
        int r1 = cut1 == n ? INT_MAX:arr1[cut1];
        int r2 = cut2 == m ? INT_MAX:arr2[cut2];

        if(l1 <= r2 && l2 <= r1){
            return max(l1,l2);
        }
        else if(l1 > r2){
            high = cut1-1;
        }
        else{
            low = cut1+1;
        }
    }
    return 1;
}
int main(){
    int arr1[] = {2,3,6,7,9};
    int arr2[] = {1,4,8,10};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int k = 5;
    //int res = kthElement(arr1,arr2,m,n,k);
    //cout<<res<<endl;
    int ans = KthElement(arr1,arr2,n,m,k);
    cout<<ans<<endl;
    return 0;
}