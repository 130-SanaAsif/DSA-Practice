#include<iostream>
#include<string>
using namespace std;

int CountA(string str, char goal){
    int cnt = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i] == goal){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    string str;
    char goal;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"Enter the character: ";
    cin>>goal;
    int res = CountA(str,goal);
    cout<<res;
    return 0;
}