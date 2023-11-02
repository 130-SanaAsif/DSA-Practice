#include <bits/stdc++.h>
using namespace std;

// approach 1.
// using stack.
// tc - o(n), sc -o(n).
queue<int> reverseQueue(queue<int> q)
{

    stack<int> st;

    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while (!st.empty())
    {
        int element = st.top();
        st.pop();
        q.push(element);
    }
    return q;
}

// approach 2.
// using recursion.

void solve(queue<int>&q)
{
    if (q.empty())
    {
        return;
    }

    int num = q.front();
    q.pop();

    solve(q);
    q.push(num);
}

queue<int> ReverseQueue(queue<int> q)
{
    solve(q);
    return q;
}

int main()
{
    queue<int> q;
    vector<int> arr = {3, 6, 8, 13, 1, 35, 5};
    for (int i = 0; i < arr.size(); i++)
    {
        q.push(arr[i]);
    }

    // queue<int>ans = reverseQueue(q);
    queue<int>ans = ReverseQueue(q);
    // solve(q);
    while (!ans.empty())
    {
        cout << ans.front() << " ";
        ans.pop();
    }

    return 0;
}