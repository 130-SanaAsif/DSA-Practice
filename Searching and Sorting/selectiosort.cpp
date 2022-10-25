#include<iostream>
#include<algorithm>

using namespace std;

void PrintArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void SelectionSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(A[min], A[i]);
        }
    }
}

int main()
{
    int arr[] = {9, 1, 4, 3, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting : " << endl;
    PrintArray(arr, n);
    cout << "Before Sorting : " << endl;
    SelectionSort(arr, n);
    PrintArray(arr, n);
    return 0;
}