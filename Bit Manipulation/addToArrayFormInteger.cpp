#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<int> addArrayToForm(vector<int> &arr, int k)
    {
        int n = arr.size();
        for (int i = n - 1; i >= 0; --i)
        {
            arr[i] += k;
            k = arr[i] / 10;
            arr[i] %= 10;
        }
        while (k > 0)
        {
            arr.insert(arr.begin(), k % 10);
            k /= 10;
        }
        return arr;
    }

    void printArray(vector<int>arr){
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    vector<int>arr = {1,2,0,0};
    int k = 34;
    solution s;
    vector<int>res = s.addArrayToForm(arr,k);
    s.printArray(res);
    return 0;
}