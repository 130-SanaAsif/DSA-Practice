#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    cout<<"A & B = "<<(a&b)<<endl;
    cout<<"A | B = "<<(a|b)<<endl;
    cout<<"~ B = "<<(~b)<<endl;
    cout<<"A ^ B = "<<(a^b)<<endl;
    cout<<"17 >> 1 = "<<(17 >> 1)<<endl;//Right shift operator.
    cout<<"17 >> 2 = "<<(17 >> 2)<<endl;//Right shift operator.
    cout<<"19 << 1 = "<<(19 << 1)<<endl;//Left shift operator.
    cout<<"21 << 2 = "<<(21 << 2)<<endl;//Left shift operator.
    return 0;
}