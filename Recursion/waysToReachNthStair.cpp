#include<iostream>
using namespace std;

int waysToReachNthStair(int n){
    //Base class.
    if(n<0){
        return 0;
    }
    
    if(n == 0){
        return 1;
    }

    //Recursive Relation.
    int ans = waysToReachNthStair(n-1) + waysToReachNthStair(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    int res = waysToReachNthStair(n);
    cout<<"There are "<<res<<" ways to reach the "<<n<<" stairs";
    return 0;
}