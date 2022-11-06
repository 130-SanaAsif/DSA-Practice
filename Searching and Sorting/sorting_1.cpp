//Permute two arrays such that sum of every pair is greater or equal to K
//Time complexity - O(nlog(n))
#include <bits/stdc++.h>
using namespace std;

bool isPermutable(long long a[], long long b[], int n, int k){
    
    sort(a,a+n);
    sort(b,b+n, greater<int>());

    for(int i =0; i<n; i++){
        if(a[i] + b[i] < k){
            return false;
        }
    }
    return true;
}

int main(){
    long long a[] = {2,3,1};
    long long b[] = {7,9,8};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 10;
    bool res = isPermutable(a, b, n, k);
    if(res){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}