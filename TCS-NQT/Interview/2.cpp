#include<iostream>
#include<string>

using namespace std;

void swapString(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

int main(){
    string s;
    cout<<"Enter the string = ";
    getline(cin,s);

    int lo = 0, hi = s.size()-1;

    while(lo <= hi){
        swapString(s[lo], s[hi]);
        lo++;
        hi--;
    }

    cout<<"Reverse String = "<<s<<endl;

    return 0;
}