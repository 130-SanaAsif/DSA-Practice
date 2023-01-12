#include<bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int N)
    {
      unordered_map<int, int>umap;
      int long_length = 0;
      for(int i = 0; i<N; i++){
          umap[arr[i]]++;
         }
         for(int  i = 0; i<N ; i++)
         {
             if(umap.find(arr[i]-1) == umap.end())
             {
                 int num = arr[i];
                 while(umap.find(num) != umap.end())
                 {
                     num++;
                 }
                 if(long_length < num - arr[i]){
                 long_length = num - arr[i];
                 }
                 
             }
             
         }
         return long_length;
    }

int main(){
    int arr[] ={2,6,1,9,4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = findLongestConseqSubseq(arr,n);
    cout<<res;
    return 0;
}