#include<bits/stdc++.h>
using namespace std;

//Brute-Force Approach.
//TC - O(n).
//SC - O(n).
//vector<int>RepeatMissing(vector<int>&arr){
//    int n = arr.size()+1;
//    vector<int>num(n,0);
//    vector<int>ans;
//    int miss = 0, repeat = 0;
//    for(int i=0; i<arr.size(); i++){
//        num[arr[i]]++;
//    }
//    for(int i=0; i<arr.size(); i++){
//        if(num[i] == 0 || num[i] > 1){
//            ans.push_back(i);
//        }
//    }
//    return ans;
//}

//Optimal Approach using math.
//TC - O(N).
//SC - O(1).
//vector<int>RepeatMissing(vector<int>&arr){
//    long long int n = arr.size();
//    long long int S = n*(n+1)/2;
//    long long int P = (n * (n +1) *(2*n +1) )/6;
//    long long int repeat = 0, missing = 0;
//    for(int i=0; i<arr.size(); i++){
//        S -= (long long int)arr[i];
//        P -= (long long int)arr[i]*(long long int)arr[i];
//    }
//    missing = (S + P/S)/2;
//    repeat = missing - S;
//    vector<int>ans;
//    ans.push_back(repeat);
//    ans.push_back(missing);
//    return ans;
//}

vector<int>RepeatMissing(vector<int>&arr){
    int xor1;
    int x = 0; //Missing
    int y = 0 ;//Repeating
    int set_bit;
    xor1 = arr[0];
    //get the xor of all the elements.
    for(int i=1; i<arr.size(); i++){
        xor1 = xor1^arr[i];
    }
    //xor the previous result with the numbers 1 to n.
    for(int i=1; i<=arr.size(); i++){
        xor1 = xor1 ^ 1;
    }
    set_bit = xor1 & ~(xor1-1);
    /* Now divide elements into two sets by comparing a rightmost set bit
       of xor1 with the bit at the same position in each element.
       Also, get XORs of two sets. The two XORs are the output elements.
       The following two for loops serve the purpose */

    for(int i=0; i<arr.size(); i++){
        if(arr[i] & set_bit){
            //arr[i] belongs to first set.
            x = x^arr[i];
        }
        else{
            //arr[i] belongs to second set.
            y = y^arr[i];
        }
    }

    for(int i=1; i<=arr.size(); i++){
        if(i & set_bit){
            //i belongs to first set. 
            x = x^i;
        }
        else{
            //i belong to second set.
            y = y^i;
        }
    }

    int x_cnt = 0;
    for(int i=0; i<=arr.size(); i++){
        if(arr[i] == x){
            x_cnt++;
        }
    }
    if(x_cnt == 0){
        return{y,x};
    }
    return{x,y};
}

int main(){
    vector<int>a = {3,1,2,5,3};
    vector<int>ans;
    ans = RepeatMissing(a);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}