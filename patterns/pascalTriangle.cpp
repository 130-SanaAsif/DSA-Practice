#include<iostream>
#include<vector>
using namespace std;

void pascalTriangle(int n){
    int arr[n][n];
    for(int l=0; l<n; l++){
        for(int i = 0; i<= l; i++){
            if(l == i || i == 0)
                arr[l][i] = 1;
            else
                arr[l][i] = arr[l - 1][i - 1] +
                            arr[l - 1][i];
        cout <<"  "<< arr[l][i]<< " ";
        }
        cout << "\n"; 
    }
}

int main(){
    int n = 5;
    pascalTriangle(n);
    return 0;
}