//Make array elements equal.
/*You are given an integer N. Consider an array arr having N elements where arr[i] = 2*i+1. (The array is 0-indexed)

You are allowed to perform the given operation on the array any number of times:

1) Select two indices i and j and increase arr[i] by 1 and decrease arr[j] by 1.

Your task is to find the minimum number of such operations required to make all the elements of the array equal.*/

/*Input:
N = 3
Output:
2
Explanation:
Initially the array is {1, 3, 5}. If we perform
the operation once on the indices 0 and 2, the 
resulting array will be {2, 3, 4}. If we again 
perform the operation once on the indices 0
and 2, the resulting array will be {3, 3, 3}.
Hence, the minimum operations required is 2
in this case. */
#include<bits/stdc++.h>
using namespace std;

long long int MinimumOperation(int n){
    if(n%2 == 1){
        return (n/2)*1ll*(n/2+1);
    }
    else{
        return (n*1ll*n)/4;
    }
    return 0;
}

int main(){
    int n = 5;
    long long int res = MinimumOperation(n);
    cout<<res;
    return 0;
}

//TC - O(N).
//SC - O(1).