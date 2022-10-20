#include<stdio.h>

void PrintArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int *arr, int start, int end)
{
    int temp;

    if(start >= end){
        return ;
    }
    else
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
    return reverse(arr, start + 1, end - 1);
}

int main(){
    int arr[] = {1, 4, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    printf("Before Reverse:\n");
    PrintArray(arr, n);
    reverse(arr, start, end);
    printf("After reverse:\n");
    PrintArray(arr, n);
    return 0;
}