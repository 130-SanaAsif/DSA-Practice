#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[] = {2,3,4,56,7,89,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min)
            min = arr[i];
        
    }
    printf("Largest Element - %d\n", max);
    printf("Smallest Element - %d\n", min);
    return 0;
}