#include<iostream>
#include<vector>
using namespace std;

//Type 1.
//Given Row and Col, tell the element at that place.
//For Example:
//R = 5, C = 3.
//Output = 6.
//Using ncr formula.

int nCr(int row, int col){
    long long ans = 1;
    row = row-1;
    col = col-1;
    for(int i=0; i<col; i++){
        ans = ans*(row-i);
        ans = ans/(i+1);
    }
    return ans;
}

//Type 2.
//Print any nth row of pascal triangle.
//Example:
//N=6
//Output = 1 5 10 10 5 1.

vector<int>rowGenerator(int row){
    long long ans = 1;
    vector<int>res;
    res.push_back(1);
    for(int i=1; i<row; i++){
        ans = ans * (row-i);
        ans = ans / i;
        res.push_back(ans);
    }
    return res;
}

//Type 3.
//Generate Pascal triangle.

vector<vector<int>>pascalTriangle(int n){
    vector<vector<int>>ans;
    for(int i=1; i<=n; i++){
        ans.push_back(rowGenerator(i));
    }
    return ans;
}

int main(){
    int n = 5;

    cout<<nCr(6,5)<<endl;

    vector<int>ans = rowGenerator(n);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    vector<vector<int>>res = pascalTriangle(n);

    for (auto it : res) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}