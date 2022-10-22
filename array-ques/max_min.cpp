#include<iostream>
#include<utility>
using namespace std;

pair<long long, long long> getminMax(int a[], int n){
    long long int mine = 10000000000001;
    long long int maxe = 0;

    for(int i =0; i<n; i++){
        if(a[i]>maxe){
            maxe = a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]<mine){
            mine = a[i];
        }
    }

    pair<long long, long long>ans;
    ans.first = mine;
    ans.second = maxe;
    return ans;
}
int main(){
    int a[] = {3, 2, 1, 56, 10000, 167};
    int n = sizeof(a)/sizeof(a[0]);
    pair<long long, long long>p =  getminMax(a, n);
    cout << "Values returned by Pair: ";
    cout << p.first << " " << p.second;
}