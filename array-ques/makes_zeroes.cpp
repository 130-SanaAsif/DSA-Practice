#include<iostream>
#include<vector>
using namespace std;
void PrintArray(vector<vector<int>>&arr){
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
}

void MakesZeroes(vector<vector<int>>&arr){
    int n = arr.size();
    int m = arr[0].size();

    vector<vector<int>> temp = arr;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(temp[i][j] == 0){
                if(i+1 < n){
                    arr[i][j] += temp[i+1][j];
                    arr[i+1][j] = 0;
                }
                if(i-1 >= 0){
                    arr[i][j] += temp[i-1][j];
                    arr[i-1][j] = 0;
                }
                if(j+1<m){
                    arr[i][j] += temp[i][j+1];
                    arr[i][j+1] = 0;
                }
                if(j-1 >= 0){
                    arr[i][j] += temp[i][j-1];
                    arr[i][j-1] = 0;
                }
            }
        }
    }
}

int main(){
    const int i = 4, j = 4;
    vector<vector<int>>arr = {{1,2,3,4},
                               {5,6,0,7},
                               {8,9,4,6},
                               {8,4,5,2}};
    cout<<"Before Sorting : "<<endl;
    PrintArray(arr);
    cout<<"After Sorting : "<<endl;
    MakesZeroes(arr);
    PrintArray(arr);
    return 0;
}