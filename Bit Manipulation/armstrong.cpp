#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    int count = 0;
    int originaln = n;
    int temp = n;
    while(temp != 0){
        count++;
        temp = temp/10;
    }
    while(n>0)
    {
        int lastdigit = n%10;
        sum += pow(lastdigit,count);
        n = n/10;
    }

    if(sum == originaln)
    {
        cout<<"The given number is an armstrong number."<<endl;
    }
    else
    {
        cout<<"The given number is not an armstrong number."<<endl;
    }
    return 0;
}