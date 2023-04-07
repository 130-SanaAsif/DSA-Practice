//Add Minimum Character.
/*
Statement - Given a string str, find the minimum characters to be added at 
front of the string to make it a palindrome.
*/
/*
EXAMPLE - 1
Input:
str = ABCD
Output: 3
Explanation: The resultant string 
after adding 3 characters is DCBABCD.
The minimum possible answer is 3.
*/
#include<bits/stdc++.h>
using namespace std;

int addMinChar(string str){
    int n=str.length();
    int i=0,j=n-1;
    int cnt=0;
    while(i <= j){
        if(str[i] == str[j]){
            i++;
            j--;
        }
        else{
            cnt++;
            i=0;
            j=n-1-cnt;
        }
    }
    return cnt;
}

int main(){
    string s = "ACABCAF";
    int res = addMinChar(s);
    cout<<"The minimum character to make string palindrome is : "<<res;
    return 0;
}
//Expected Time Complexity: O(|str|)
//Expected Auxiliary Space: O(|str|)