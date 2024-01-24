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
    int arr[] = {-7,-8,-16,-4,-8,-5,-7,-11,-10,-12,-4,-6,-4,-16,-10 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = maxsubarray(arr, n);
    printf("%d", res);
    return 0;
}