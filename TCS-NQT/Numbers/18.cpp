#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;

    int fact = 1; 
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }

    cout<<"Fcatorial of "<<n<<" = "<<fact<<endl;
    
    return 0;
}