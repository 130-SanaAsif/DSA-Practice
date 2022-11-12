// Naive approach to find this problem using array.
// Which give us time complexity O(n2).
// So the better approach is to do with hashing data structure.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 10, 15, 5, 4,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
            {
                break;
            }
        if (i == j)
        {
            res++;
        }
    }
    cout << res;
}
