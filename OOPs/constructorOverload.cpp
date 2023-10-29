#include<bits/stdc++.h>
using namespace std;

class Construct{
public:
    float area;
    Construct(){
        area = 0;
    }

    Construct(int a, int b){
        area = a*b;
    }

    Construct(int r){
        area = ((3.14)*r*r);
    }

    void disp(){
        cout<<area<<endl;
    }
};
int main(){
    Construct a;
    cout<<"Constructor 1 = ";
    a.disp();

    Construct b(10,20);
    cout<<"Constructor 2 = ";
    b.disp(); 

    Construct c(4);
    cout<<"Constructor 3 = ";
    c.disp();

return 0;
}