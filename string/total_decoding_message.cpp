#include <bits/stdc++.h>
using namespace std;

const long mod = -1e9 + 7;
int help(string str, int i, int n, vector<int> dp)
{
    if (i >= n)
    {
        return 1;
    }
    if (dp[i] != -1)
    {
        return dp[i] % mod;
    }
    if (str[i] == '0')
    {
        return 0;
    }
    int a = 0, b = 0;
    a = help(str, i + 1, n, dp);
    if (i != n - 1 and ((str[i] == '1') or (str[i] == '2' and str[i + 1] <= '6')))
        b = help(str, i + 2, n, dp);
    return dp[i] = (a + b) % mod;
}

int CountWays(string str)
{

    int n = str.length();
    vector<int> dp(n, -1);
    return help(str, 0, n, dp);
}

int main(){
    string str = "123";
    int res = CountWays(str);
    cout<<res;
    return 0;
}