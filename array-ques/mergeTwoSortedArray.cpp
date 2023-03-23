#include <iostream>
#include<cmath>
#include <algorithm>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//BruteForce Approach 
// void merge(int arr1[], int arr2[], int n, int m){
//     int arr3[n+m];
//     int k=0;
//     for(int i=0; i<n; i++){
//         arr3[k++] = arr1[i];
//     }
//     for(int i=0; i<m; i++){
//         arr3[k++] = arr2[i];
//     }
//     sort(arr3,arr3+n+m);
//     k=0;
//     for(int i=0; i<n; i++){
//         arr1[i] = arr3[k++];
//     }
//     for(int i=0; i<m; i++){
//         arr2[i] = arr3[k++];
//     }
// }

//Insertion Method.
//void merge(int a[], int b[], int n, int m)
//{
//    int k;
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] > b[0])
//        {
//            swap(a[i], b[0]);
//        }
//
//        int first = b[0];
//        for (k = 1; k < m && b[k] < first; k++)
//        {
//            b[k - 1] = b[k];
//        }
//        b[k - 1] = first;
//    }
//}

//Optimized Approach.
//Gap Method.
void merge(int a[], int b[], int n, int m){
    int gap = ceil((float)(n+m)/2);
   
    while(gap > 0){
        int i = 0;
        int j = gap;
        while(j < (n+m)){
            if(j<n && a[i]>a[j]){
                swap(a[i], a[j]);
            }
            else if(j>=n && i<n && a[i]>b[j-n]){
                swap(a[i],b[j-n]);
            }
            else if(j >= n && i>=n && b[i-n] > b[j-n]){
                swap(b[i-n],b[j-n]);
            }
            i++;
            j++;
        }
        if(gap==1){
            gap = 0;
        }
        else{
            gap = ceil((float)gap/2);
        }
    }
}
int main()
{
    int arr1[] = {1, 4, 8, 10};
    int arr2[] = {2, 3, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Before Merging : " << endl;
    printArray(arr1, n);
    printArray(arr2, m);
    cout << "After Merging : " << endl;
    merge(arr1, arr2, n, m);
    printArray(arr1, n);
    printArray(arr2, m);
    return 0;
}