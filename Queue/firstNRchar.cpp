#include<bits/stdc++.h>
using namespace std;

string firstNonRepeatChar(string s){
    //step 1 define DS.
    unordered_map<char,int>count;//to count the frequency of character.
    queue<char>q;//to store non repeating character.
    string res = "";

    for(int i=0; i<s.length(); i++){

        char ch = s[i];

        //increase count.
        count[ch]++;

        //push in queue.
        q.push(ch);

        while(!q.empty()){

            if(count[q.front()] > 1){
                //repeating character.
                q.pop();
            }
            else{
                //non repeating character.
                res.push_back(q.front());
                break;
            }
        }

        if(q.empty()){
            res.push_back('#');
        }
    }
    return res;
}

int main(){

    string s = "abbsb";
    string res = firstNonRepeatChar(s);
    cout<<res<<endl;

return 0;
}