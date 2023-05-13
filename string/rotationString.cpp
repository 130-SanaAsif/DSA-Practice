#include<bits/stdc++.h>
using namespace std;

//Brute For using queue.
bool rotateString(string s, string goal){
    queue<char>q1;
    queue<char>q2;
    for(int i=0; i<s.size(); i++){
        q1.push(s[i]);
    }
    for(int i=0; i<goal.size(); i++){
        q2.push(goal[i]);
    }
    int k = goal.size()-1;
    while(k != 0){
        char ch = q2.front();
        q2.pop();
        q2.push(ch);
        if(q1 == q2){
            return true;
        }
        k--;
    }
    return false;
}

int main(){
    string s = "geeksforgeeks";
    string goal = "forgeeksgeeks";
    bool res = rotateString(s,goal);
    if(res == 1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}