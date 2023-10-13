#include<bits/stdc++.h>
using namespace std;

//Example 1.
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

//Example 2.

class ExamResult{
private:
    int math, english, sci, obtained;
    int max = 300;
    float result;

public:
    ExamResult(int a, int b, int c){
        math = a;
        english = b;
        sci = c;
        obtained = math+english+sci;
        result = (static_cast<float> (obtained)/max)*100;
        cout<<result<<endl;
    }
};

int main(){
    // int a;
    // cin>>a;

    // cin.ignore();

    // string b;
    // getline(cin,b);

    // ParaConstruct p(a,b);
    // p.display();

    ExamResult(90,80,99);

    return 0;
}