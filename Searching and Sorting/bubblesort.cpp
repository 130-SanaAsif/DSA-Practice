//Bubble Sort program in C++.
#include <iostream>
using namespace std;
void printArray(int x[], int n)//For printing the array.
{
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}
void BubbleSort(int x[], int size)//ALgorithm for sorting.
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];//swapping algorithm.
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}
void BubbleSortAdaptive(int x[], int size)//ALgorithm for sorting.
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        cout<<"Working on pass number "<<i+1<<"\n";
        bool isSorted = 1;
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];//swapping algorithm.
                x[j] = x[j + 1];
                x[j + 1] = temp;
                isSorted = 0;
            } 
        }
        if(isSorted)
            {
                return;
            }
    }
}

int main()
{
    int x[] = {0 , 1, 0};
    //int x[] = {1, 2, 3, 4, 5,6 , 7, 8, 9, 10};
    int y = sizeof(x) / sizeof(x[0]);
    printArray(x, y);
    BubbleSortAdaptive(x, y);
    cout << "Sorted Array: \n";
    printArray(x, y);//printing the result after sorting.
    return 0;
}