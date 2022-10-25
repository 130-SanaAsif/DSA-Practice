#include <iostream>
using namespace std;
void PrintArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void InsertionSort(int A[], int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = sizeof(A) / sizeof(A[0]);
    cout<<"Before Sorting: \n";
    PrintArray(A, n);
    cout<<"After Sorting: \n";
    InsertionSort(A, n);
    PrintArray(A, n);
}