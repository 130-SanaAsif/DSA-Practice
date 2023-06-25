#include<bits/stdc++.h>
using namespace std;

int MinCost(int n, int prices[], int dislike[]){
        //Write Code Here
      int sum = 0;
        int ans = dislike[0];
        for(int i=0; i<n; i++){
            if(ans < dislike[i+1]){
                ans = dislike[i+1];
                sum = sum+prices[i+1];
            }
        }
        if(sum != 0){
            return sum;
        }
        else{
            return -1;
        }
    }

int main(){
    int n = 2;
    int arr1[] = {10,9};
    int arr2[] = {1,1};
    int res = MinCost(n,arr1,arr2);
    cout<<res;
    return 0;
}