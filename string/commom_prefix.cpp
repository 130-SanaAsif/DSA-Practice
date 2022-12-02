#include<iostream>
#include<fstream>
using namespace std;

string compareTwo(string A, string B){
    string pre = "";
    int i=0;
    while(i<A.size() && i<B.size()){
        if(A[i] == B[i]){
            pre += A[i];
        }
        else{
            break;
        }
        i++;
    }
    return pre;
}

string commonPrefix(string arr[], int n){
    string pre = arr[0];
    for(int i=0; i<n; i++){
        pre = compareTwo(pre, arr[i]);
    }
    if(pre == ""){
        return "-1";
    }
    else{
        return pre;
    }
}

int main(){
    string arr[] = {"geeksforgeeks", "geeks", "geek","geezer"};
    int n = sizeof(arr)/sizeof(arr[0]);
    string res = commonPrefix(arr, n);
    cout<<res;
    return 0;
}