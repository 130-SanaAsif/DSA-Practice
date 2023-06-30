//Minimum Step Required.
/*
Statement - Given a string str consisting of only two characters 'a' and 'b'. 
You need to find the minimum steps required to make the string 
empty by removing consecutive a's and b's.
*/
//Example - 2.
/*
Input:
str = "aababaa"
Output:
3
Explanation:
Operation 1: Removal of b's modifies str to "aaabaa".
Operation 2: Removal of b's modifies str = "aaaaa".
Operation 3: Removal of all remaining a's makes str 
empty.
Therefore, the minimum number of operations required 
is 3.
*/
#include<bits/stdc++.h>
using namespace std;

int minimumStep(string str){
    int cnt=1;
    for(int i=1; i<str.length();i++){
        if(str[i] == str[i-1]) continue;
        cnt++;
    }
    return (cnt+2)/2;
}

int main(){
    string str = "abcddcda";
    int res = minimumStep(str);
    cout<<"Minimum step required to make the string empty by removing consecutive's a's and b's : "<<res;
    return 0;
}

//TC - O(N).
//SC - O(1).