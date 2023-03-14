#include<iostream>
using namespace std;
int main(){
    int n, fact = 1;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>0){
    for(int i =1; i<=n;i++){
      fact *=i;  
    }
  }
  else{
    cout<<"Factorial of negative number doesn't exist."<<endl;
  }
  cout<<"Factorial of "<<n<<" is "<<fact<<endl;
  return 0;
}