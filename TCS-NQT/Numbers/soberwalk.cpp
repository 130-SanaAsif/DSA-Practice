#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x = 0, y = 0;
    int temp = 10;
    int i = 0;
    char dir = 'r';
    while(n){
        switch (dir)
        {
        case 'r':
            x = x+temp*i;
            dir = 'u';
            i++;
            break;
        
        case 'u':
            y = y+temp*i;
            dir = 'l';
            i++;
            break;

        case 'l':
            x = x-temp*i;
            dir = 'd';
            i++;
            break;

        case 'd':
            y = y-temp*i;
            dir = 'r';
            i++;
            break;
        }
        n--;
    }

    cout<<"( "<<x<<" , "<<y<<" )"<<endl;
return 0;
}