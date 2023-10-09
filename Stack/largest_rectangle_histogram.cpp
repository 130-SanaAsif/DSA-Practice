#include <bits/stdc++.h>

using namespace std;
class Solution {
  public:
    //int largestRectangleArea(vector < int > & heights) {
    //  int n = heights.size();
    //  stack < int > st;
    //  int leftsmall[n], rightsmall[n];
    //  for (int i = 0; i < n; i++) {
    //    while (!st.empty() && heights[st.top()] >= heights[i]) {
    //      st.pop();
    //    }
    //    if (st.empty())
    //      leftsmall[i] = 0;
    //    else
    //      leftsmall[i] = st.top() + 1;
    //    st.push(i);
    //  }

    //  while (!st.empty())
    //    st.pop();

    //  for (int i = n - 1; i >= 0; i--) {
    //    while (!st.empty() && heights[st.top()] >= heights[i])
    //      st.pop();

    //    if (st.empty())
    //      rightsmall[i] = n - 1;
    //    else
    //      rightsmall[i] = st.top() - 1;

    //    st.push(i);
    //  }
    //  int maxA = 0;
    //  for (int i = 0; i < n; i++) {
    //    maxA = max(maxA, heights[i] * (rightsmall[i] - leftsmall[i] + 1));
    //  }
    //  return maxA;
    //}

    int largestRectangleArea(vector<int>&arr){
        int maxA = 0;
        int width, height;
        int n = arr.size();
        stack<int>s;
        for(int i=0; i<=n; i++){
            while(!s.empty() && (i == n || arr[s.top()] >= arr[i])){
                height = arr[s.top()];
                s.pop();
                if(s.empty())
                    width = i;
                else
                    width = i-s.top()-1;
                    // cout<<width<<endl;
                maxA = max(maxA, width*height);
            }
            s.push(i);
        }
        return maxA;
    }
};
int main() {
  vector<int> heights = {2,1,5,6,2,3};
  Solution obj;
  cout << "The largest area in the histogram is " << obj.largestRectangleArea(heights); 
  return 0;
}