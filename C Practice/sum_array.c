#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    printf("Sum of array is - %d", sum);
    return 0;
}