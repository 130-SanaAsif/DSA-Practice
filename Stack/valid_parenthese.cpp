#include <bits/stdc++.h>
using namespace std;

bool Valid(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (st.empty())
        {
            st.push(str[i]);
        }
        else if ((st.top() == '(' && str[i] == ')') ||
                 (st.top() == '{' && str[i] == '}') ||
                 (st.top() == '[' && str[i] == ']'))
        {
            st.pop();
        }
        else
        {
            st.push(str[i]);
        }
    }
    if (st.empty())
    {
        return true;
    }
    return false;
}

int main()
{
    string str = "()[]{}()[]{}";
    if(Valid(str)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced";
    }
    return 0;
}