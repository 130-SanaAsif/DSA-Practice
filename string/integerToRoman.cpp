#include<bits/stdc++.h>
using namespace std;

string intToRoman(int n){
    string s = "";
    while(n >= 1000){
        s+="M";
        n = n-1000;
    }
    if(n >= 900){
        s+="CM";
        n = n-900;
    }

    while(n >= 500){
        s+="D";
        n = n-500;
    }
    if(n >= 400){
        s+="CD";
        n = n-400;
    }

    while(n >= 100){
        s+="C";
        n = n-100;
    }
    if(n >= 90){
        s+="XC";
        n = n-90;
    }

    while(n >= 50){
        s+="L";
        n = n-50;
    }
    if(n >= 40){
        s+="XL";
        n = n-40;
    }

    while(n >= 10){
        s+="X";
        n = n-10;
    }
    if(n >= 9){
        s+="IX";
        n = n-9;
    }

    while(n >= 5){
        s+="V";
        n = n-5;
    }
    if(n >= 4){
        s+="IV";
        n = n-4;
    }

    while(n >= 1){
        s+="I";
        n = n-1;
    }

    return s;
}

int main(){
    int n = 123;
    string res = intToRoman(n);
    cout<<res;

    return 0;
}