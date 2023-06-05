#include<stdio.h>
int main(){
    char data[30];
    int cnt=0, len=0, i;
    printf("Enter data : ");
    scanf("%s",&data);
    while(data[len] != '\0'){
        if(data[len] == '1'){
            cnt++;
        }
        len++;
    }
    printf("Press 1 for even parity\n");
    printf("Press 2 for odd parity\n");
    scanf("%d",&i);
    if(i == 1){
        if(cnt%2 == 0){
            data[len-1] = '\0';
            printf("The codeword is : %s",data);
        }
        else{
            printf("Error");
        }
    }
    else{
        if(cnt%2 == 1){
            data[len-1] = '\0';
            printf("The codeword is : %s",data); 
        }
        else{
            printf("Error");
        }
    }
    return 0;
}