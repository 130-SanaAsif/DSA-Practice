#include<bits/stdc++.h>
using namespace std;

bool balancedBraces(string s){
   int n = s.size();
   if(n == 0){
    return false;
   }   
   int cntOpen = 0;
   int cntClose = 0;
   for(int i=0; i<n; i++){
        if(s[i] == '{'){
            cntOpen++;
        }
        else{
            cntClose++;
        }
   }

   if(cntOpen == cntClose){
    return true;
   }
   else{
    return false;
   }
}

int main(){
    string s;
    cin>>s;
    cout<<"Given : "<<s<<endl;
    if(balancedBraces(s)){
        cout<<"Successful"<<endl;
    }
    else{
        cout<<"Compilation Error"<<endl;
    }

    return 0;
}