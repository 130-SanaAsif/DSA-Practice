#include <iostream>
#include<vector>
using namespace std;

int countOnes(vector<int>arr, int n)
{
    if (arr[0] == 1)
    {
        return n;
    }
    if (arr[n - 1] == 0)
    {
        return 0;
    }
    else
    {
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == 1 || arr[mid - 1] == 0)
            {
                return n - mid;
            }
            else if (arr[mid] == 1)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return 0;
}

int maxOnes(vector<vector <int>> &Mat, int n, int m){
    int max =-1;
    int ans =-1;
    for(int i=0; i<n; i++){
        int x = countOnes(Mat[i], m);
        if(x>max){
            max = x;
            ans = i;
        }
    }
    return ans;
}

int main(){
    vector<vector<int>>arr = {{0 ,1},{1, 1}};
    int n, m;
    int res = maxOnes(arr, 2, 2);
    cout<<res;
    return 0;
}