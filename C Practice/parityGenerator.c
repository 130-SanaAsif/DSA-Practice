#include<stdio.h>
int main(){
    char Data[30];
    int cnt = 0, len = 0, i;
    printf("Enter data: ");
    scanf("%s",&Data);
    while(Data[len] != '\0'){
        if(Data[len] == '1'){
            cnt++;
        }
        len++;
    }
    printf("Press 1 for even parity\n");
    printf("Press 2 for odd parity\n");
    scanf("%d",&i);
    if(i==1){
        if(cnt%2 == 0){
            Data[len] = '0';
        }
        else{
            Data[len] = '1';
        }
    }
    else{
        if(cnt%2 == 1){
            Data[len] = '0';
        }
        else{
            Data[len] = '1';
        }
    }
     Data[len+1] = '\0';
     printf("The codeword is : %s",Data);
     return 0;
}