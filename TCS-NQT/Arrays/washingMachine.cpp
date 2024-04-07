#include<bits/stdc++.h>
using namespace std;

int main(){
    int weight;
    cin>>weight;
    if(weight > 7000){
        cout<<"Overloaded"<<endl;
        return 0;
    }
    if(weight == 0){
      cout<<"0 minutes"<<endl;
    }
    else if(weight<=2000 && weight != 0){
        cout<<"25 minutes"<<endl;
    }
    else if(weight >= 2000 && weight <= 4000){
        cout<<"35 minutes"<<endl;
    }
    else if(weight > 4000){
        cout<<"45 minutes"<<endl;
    }
return 0;
}