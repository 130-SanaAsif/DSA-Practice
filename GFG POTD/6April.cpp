//Equal Left and Right Subarray Sum.
/*
Statement - Given an array A of n positive numbers. The task is to find the 
first index in the array such that the sum of elements before it is 
equal to the sum of elements after it.
Note:  Array is 1-based indexed.
*/ 
/*
Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 3 
Explanation: For second test case 
at position 3 elements before it 
(1+3) = elements after it (2+2).
*/
#include<bits/stdc++.h>
using namespace std;

int equalSum(vector<int>&a){
    int sum=0;
    for(int i=0; i<a.size(); i++){
        sum+=a[i];
    }
    int aheadSum = sum, prevSum = 0;
    for(int i=0; i<a.size(); i++){
        aheadSum-=a[i];
        if(aheadSum == prevSum) return i+1;
        prevSum+=a[i];
    }
    return -1;
}

int main(){
    vector<int>a = {1,3,5,2,2};
    int res = equalSum(a);
    cout<<res;
    return 0;
}
//TC - O(N).
//SC - O(1).