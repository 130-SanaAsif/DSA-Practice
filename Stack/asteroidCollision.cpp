#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

class Asteroid{
    public:
    vector<int>asteroidCollision(vector<int>&ast){
        int n = ast.size();
        stack<int>s;
        for(int i=0; i<n; i++){
            if(ast[i] > 0 || s.empty()){
                s.push(ast[i]);
            }
            else{
                while(!s.empty() and s.top() > 0 and s.top() < abs(ast[i])){
                    s.pop();
                }
                if(!s.empty() and s.top() == abs(ast[i]))
                    s.pop();
                else if(s.empty() || s.top() < 0)
                    s.push(ast[i]);
            }
        }
        vector<int>ans(s.size());
        for(int i=ans.size()-1; i>=0; --i){
            ans[i] = s.top();
            s.pop();
        }
        return ans;
    }

    void printArray(vector<int>arr){
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    vector<int>arr = {5,10,-5};
    Asteroid a;
    vector<int>res = a.asteroidCollision(arr);
    a.printArray(res);
    return 0;
}