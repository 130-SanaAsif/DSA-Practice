#include<bits/stdc++.h>
using namespace std;

class ParaConstruct{
private:
    int a;
    string b;
public:
    ParaConstruct(int a, string b){
        this->a = a;
        this->b = b;
    }

    void display(){
        cout<<"Value of a : "<<a<<endl;
        cout<<"Value of b : "<<b<<endl;
    }
};

int main(){
    int a;
    cin>>a;

    cin.ignore();
    
    string b;
    getline(cin,b);

    ParaConstruct p(a,b);
    p.display();

    return 0;
}