#include<bits/stdc++.h>
using namespace std;

// class student{
// private:
//     string studentName;
//     int age;
//     int rollno;

// public:
//     string getName(){
//         return this->studentName;
//     }
//     int getAge(){
//         return this->age;
//     }
//     int getRollno(){
//         return this->rollno;
//     }
// };

class temp{
private:
    int a;
    int b;
public:
    int solve(int x){
        a = x;
        b = a/2;
        return b;
    }
};

int main(){
    // student s;
    int x;
    cin>>x;
    temp half;
    int ans = half.solve(x);
    cout<<ans;
return 0;
}