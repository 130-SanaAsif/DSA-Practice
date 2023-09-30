#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int top1;
    int top2;
    int size;

public:
    Stack(int s){
        this->size = s;
        top1 = -1;
        top2 = size;
        arr = new int[s];
    }

    void push1(int num){
        if(top2-top1 > 1){
            top1++;
            arr[top1] = num;
        }
        else{
            cout<<"Stack OverFlow"<<endl;
        }
    }

    void push2(int num){
        if(top2-top1 > 1){
            top2--;
            arr[top2] = num;
        }
        else{
            cout<<"Stack UnderFlow"<<endl;
        }
    }

    int pop1(){
        if(top1 >= 0){
            int x = arr[top1];
            top1--;
            return x;
        }
        else{
            return -1;
        }
    }

    int pop2(){
        if(top2 < size){
            int y = arr[top2];
            top2++;
            return y;
        }
        else{
            return -1;
        }
    }

    bool isEmpty1(){
        if(top1 == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty2(){
        if(top2 == size){
            return true;
        }
        else{
            return false;
        }
    }

    int peek1(){
        if(top1 >= 0){
            int x = arr[top1];
            return x;
        }
        else{
            return -1;
        }
    }

    int peek2(){
        if(top2 < size){
            int y = arr[top2];
            return y;
        }
        else{
            return -1;
        }
    }
};

int main(){
    Stack st(7);

    st.push1(23);
    st.push1(34);
    st.push1(35);
    st.push1(29);
    st.push2(45);
    st.push2(20);
    st.push2(90);

    cout<<st.peek1()<<endl;
    cout<<st.peek2()<<endl;

    while(!st.isEmpty1()){
        cout<<st.peek1()<<" ";
        st.pop1();
    }
    cout<<endl;
    while(!st.isEmpty2()){
        cout<<st.peek2()<<" ";
        st.pop2();
    }
}