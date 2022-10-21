#include <stdio.h>

const int sum = -1e9;
int maxsubarray(int arr[], int n)
{
    
    int maxsum = sum;
    int cursum = 0;
    for (int i = 0; i < n; i++)
    {
        cursum = cursum + arr[i];
        if (cursum > maxsum)
        {
            maxsum = cursum;
        }
            if (cursum < 0)
            {
                cursum = 0;
            }
        
    }
    return maxsum;
}
int main()
{
    int arr[] = {5,-4,-2,6,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = maxsubarray(arr, n);
    printf("%d", res);
    return 0;
}