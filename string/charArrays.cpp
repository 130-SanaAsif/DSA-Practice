#include<bits/stdc++.h>
using namespace std;

char toLowerCase()

bool isPalindrome(char arr[], int n){
    int s = 0;
    int e = n-1;

    while(s <= e){
        if(arr[s] != arr[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

void reverse(char arr[], int n){
    int s = 0;
    int e = n-1;
    while(s < e){
        swap(arr[s++], arr[e--]);
    }
}

int getLen(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cin>>name;
    cout<<name<<endl;
    int len = getLen(name);
    cout<<len<<endl;
    reverse(name,len);
    cout<<name<<endl;

    if(isPalindrome(name,len)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}