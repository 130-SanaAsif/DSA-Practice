//By Boyer's Moore Voting Algorithm.
#include<bits/stdc++.h>
using namespace std;

//int majorityElement(vector<int>&nums){
//    int cnt = 0;
//    int candidate = 0;
//    for(int num : nums){
//        if(cnt == 0){
//            candidate = num;
//        }
//        if(num == candidate){
//            cnt++;
//        }
//        else{
//            cnt--;
//        }
//    }
//    return candidate;
//}

int majorityElement(int nums[], int n){
    int count = 1;
    int index = 0;
    for(int i=1; i<n; i++){
        if(nums[index] == nums[i]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            index = i;
            count = 1;
        }
    }
    return nums[index];
}

bool isMajority(int arr[], int n, int cand){
    int count = 0;
    cand = majorityElement(arr, n);
    for(int i=0; i<n; i++){
        if(arr[i] == cand){
            count++;
        }
    }
    if(count>n/2)
        return 1;
    
    else
        return 0;
    
}

void printMajority(int a[], int size)
{
    /* Find the candidate for Majority*/
    int cand = majorityElement(a, size);
 
    /* Print the candidate if it is Majority*/
    if (isMajority(a, size, cand))
        cout << " " << cand << " ";
 
    else
        cout << "No Majority Element";
}
int main(){
    //vector<int>nums = {5,2,1,5,1,1};
    int nums[] = {1,2,3,3,2,1};
    int n = sizeof(nums)/sizeof(nums[0]);
    //int res = majorityElement(nums);
    printMajority(nums, n);
    return 0;
}