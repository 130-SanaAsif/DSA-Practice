#include <bits/stdc++.h>

using namespace std;

string uncommon_char(string A, string B)
{
    int hm1[26] = {0}, hm2[26] = {0};
  

    for (auto &ch : A)
    {
        hm1[ch - 'a'] = 1;
    }

    for (auto &ch : B)
    {
        hm2[ch - 'a'] = 1;
    }

    string chars = "";

    for (int i = 0; i < 26; i++)
    {
        if (hm1[i] ^ hm2[i])
            chars += char(i + 'a');
    }

    if (chars == "")
        return "-1";
    else
        return chars;
}
int main()
{
    string A = {"geeksforgeeks"};
    string B = {"geeksquiz"};
    string res = uncommon_char(A, B);
    cout << res << endl;
    return 0;
}
