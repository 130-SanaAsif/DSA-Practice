#include <bits/stdc++.h>
using namespace std;

    vector<int> sum(vector<int>&nums, int target)
    {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
            {
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return ans;
    }


int main()
{
    vector <int> a = {3,2,3,4};
    int target = 7;
    for(int &x : sum(a , target))
        cout << x << " ";
    cout << '\n';
}