#include<bits/stdc++.h>
using namespace std;

// class Biryani{
//     public:
//     Biryani(){
//         cout<<"Biryani";
//     }
// };
// class b : public Biryani{
//     public:
//     b(){
//         cout<<" khalo friends";
//     }
// };


class A{
    protected:
    int a;
    public:
        void set_A(){
            cout<<"Enter the value of A = ";
            cin>>a;
        }

        void display_A(){
            cout<<"Value of a = "<<a<<endl;
        }
};

class B : public A{
    int b, p;
    public:
        void set_B(){
            set_A();
            cout<<"Enter the value of B = ";
            cin>>b;
        }

        void display_B(){
            display_A();
            cout<<"Value of B = "<<b<<endl;
        }

        void product(){
            p = a * b;
            cout<<"Product of A * B = "<<p<<endl;
        }
};
int main(){
    //b k;

    B sum;
    sum.set_B();
    sum.display_B();
    sum.product();

return 0;
}