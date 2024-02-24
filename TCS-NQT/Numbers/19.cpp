#include<iostream>
using namespace std;

int main(){
    int n,power;
    cout<<"Enter a number = ";
    cin>>n;
    cout<<"Enter power = ";
    cin>>power;

   int res = 1;
   for(int i=0; i<power; i++){
        res = res*n;
   }
    cout<<n<<" power "<<power<<" = "<<res<<endl;

    return 0;
}