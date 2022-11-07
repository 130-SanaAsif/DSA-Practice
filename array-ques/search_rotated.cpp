//Search in Rotated Sorted Array
#include <iostream>
using namespace std;

void PrintArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int SortedRotated_array(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] >= arr[low])
        {   
            //Left part sorted
            if (target < arr[mid] && target >= arr[low])
                high = mid - 1;
            else
                low = mid + 1;

        }    
        else
        {   
            //Right part sorted
            if (target <= arr[high] && target > arr[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    //PrintArray(arr,n);
    cout << "Enter a element to search its index: ";
    cin >> target;
    int res = SortedRotated_array(arr,n,target);
    cout<<"The element is present at index "<<res;
    return 0;
}