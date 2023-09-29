// #include<bits/stdc++.h>
// using namespace std;
// #define MAX 1000

// class Stack{
//     int top;
// public:
//         int a[MAX];
//         Stack(){
//             top = -1;
//         }
//         bool push(int x);
//         int pop();
//         int peek();
//         bool isempty();
// };

// bool Stack::push(int x){
//     if(top >= (MAX-1)){
//         cout<<"Stack OverFlow";
//         return false;
//     }
//     else{
//         a[++top] = x;
//         cout<<x<<" pushed into stack.\n";
//         return true;
//     }
// }

// int Stack::pop(){
//     if(top < 0){
//         cout<<"Stack UnderFlow";
//         return 0;
//     }
//     int x = a[top--];
//     return x;
// }

// int Stack::peek(){
//     if(top < 0){
//         cout<<"Stack is empty";
//         return 0;
//     }
//     else{
//     int x = a[top];
//     return x;
//     }
// }

// bool Stack::isempty(){
//     return(top<0);
// }

// int main(){
//     class Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     cout<<s.pop()<<" popped from stack\n";
//     cout<<"Elements present in the stack\n";
//     while(!s.isempty()){
//         cout<<s.peek()<<" ";
//         s.pop();
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

class Stack{
public:
    int *arr;
    int size;
    int top;

    Stack(int x){
        this->size = x;
        arr = new int(x);
        top = -1;
    }

    void push(int ele){
        if(size - top > 1){
            top++;
            arr[top] = ele;
            // cout<<ele<<" push into the stack"<<endl;
        }
        else{
            cout<<"Stack OverFlow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            // int x = arr[top];
            top--;
            // cout<<x<<" popped from stack"<<endl;
        }
        else{
            cout<<"Stack UnderFlow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            int x = arr[top];
            return x;
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    int sizeOfStack(){
        
        return top+1;
    }
};

int main(){
    Stack st(6);

    st.push(23);
    st.push(34);
    st.push(35);
    st.push(56);
    st.push(78);
    st.push(89);

    st.pop();
    cout<<"The size of stack "<<st.sizeOfStack()<<endl;

    while(!st.isEmpty()){
        cout<<st.peek()<<" ";
        st.pop();
    }
    return 0;
}