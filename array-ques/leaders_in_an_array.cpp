#include <iostream>
#include <algorithm>

using namespace std;

    void leaders(int arr[], int n)
    {
       
        int max1 = arr[n - 1];
        cout<<max1<<" ";
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] >= max1)
            {
                max1 = arr[i];
                cout<<max1<<" ";
            }
        }
        
    }


int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    leaders(arr,n);
    return 0;
}