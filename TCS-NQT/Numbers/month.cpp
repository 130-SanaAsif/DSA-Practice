#include<iostream>
using namespace std;

void func(int mnth){
    if(mnth < 1 || mnth > 12){
        cout<<"Invalid Month Entered"<<endl;
        return;
    }

    if(mnth >= 3 && mnth <=5){
        cout<<"Spring Season"<<endl;
    }
    else if(mnth >= 6 && mnth <= 8){
        cout<<"Summer Season"<<endl;
    }
    else if(mnth >= 9 && mnth <= 11){
        cout<<"Autumn Season"<<endl;
    }
    else{
        cout<<"Winter Season"<<endl;
    }
}

int main(){
    int mnth;
    cin>>mnth;

    func(mnth);

    return 0;
}