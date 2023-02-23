#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class solution
{
public:
    vector<int>Permutation(vector<int> &arr)
    {
        int n = arr.size(), k, l;
        for (k = n - 2; k >= 0; k--)
        {
            if (arr[k] < arr[k + 1])
            {
                break;
            }
        }
        if (k < 0)
        {
            reverse(arr.begin(), arr.end());
            return arr;
        }
        else
        {
            for (l = n - 1; l > k; l--)
            {
                if (arr[l] < arr[k])
                {
                    break;
                }
            }
            swap(arr[l], arr[k]);
            reverse(arr.begin() + k + 1, arr.end());
            return arr;
        }
    }
};

int main(){
    vector<int>arr = {1,2,3};
    solution s;
    vector<int>res = s.Permutation(arr);
    for(int i = 0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}