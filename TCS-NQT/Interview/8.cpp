#include<iostream>
#include<deque>
#include<vector>
using namespace std;

void printMaxAndMin(int arr[], int n, int k){
    int max,j,min;
    cout<<"Maximum = ";
    for(int i=0; i<=n-k; i++){
        max = arr[i];
        for(j=1; j<k; j++){
            if(arr[i+j] > max){
                max = arr[i+j];
            }
        }
        cout<<max<<" ";
    }
    cout<<endl<<"Minimum = ";

    for(int i=0; i<=n-k; i++){
        min = arr[i];
        for(j=1; j<k; j++){
            if(arr[i+j] < min){
                min = arr[i+j];
            }
        }
        cout<<min<<" ";
    }
    cout<<endl;
}

//Approach 2 using deque;

void maxSliding(int arr[], int n, int k){
    deque<int>dq;
    vector<int>res;

    for(int i=0; i<n; i++){
        if(!dq.empty() && dq.front() == i-k){
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()] < arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i >= k-1){
            res.push_back(arr[dq.front()]);
        }
    }

    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}

void minSliding(int arr[], int n, int k){
    deque<int>dq;
    vector<int>ans;

    for(int i=0; i<n; i++){
        if(!dq.empty() && dq.front() == i-k){
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()] > arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i >= k-1){
            ans.push_back(arr[dq.front()]);
        }
    }

    for(int i=0; i<ans.size(); i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[] = {2,5,7,4,1,9,10,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    printMaxAndMin(arr,n,k);
    maxSliding(arr,n,k);
    minSliding(arr,n,k);
    return 0;
}