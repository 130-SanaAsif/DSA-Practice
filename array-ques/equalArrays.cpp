#include <bits/stdc++.h>
using namespace std;

int equalArrays(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += a[i];
    }

    for (int i = 0; i < m; i++)
    {
        sum2 += b[i];
    }

    if (sum1 != sum2)
    {
        return -1;
    }

    int left = 0, right = 0, len = 0;
    while (left < n && right < m)
    {
        len++;
        int s1 = a[left];
        left++;
        int s2 = b[right];
        right++;
        while (s1 != s2)
        {
            if (s1 < s2)
            {
                s1 += a[left];
                left++;
            }
            else
            {
                s2 += b[right];
                right++;
            }
        }
    }
    return len;
}

int main(){
    vector<int>arr = {2,5,6};
    vector<int>brr = {1,2,10};

    int res = equalArrays(arr,brr);
    cout<<"The array can be equal in maximum length is "<<res<<endl;
    return 0;
}
//Time Complexity - O(N).
//Space Complexity - O(1).