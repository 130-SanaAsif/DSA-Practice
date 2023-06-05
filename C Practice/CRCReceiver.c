#include<stdio.h>
#include<string.h>
int main(){
    char data[100],div[20];
    int i,j,datal,divl,flag=1;
    printf("Enter data : ");
    scanf("%s",data);
    printf("Enter divisor : ");
    scanf("%s",div);

    datal = strlen(data);
    divl = strlen(div);

    char data2[100];
    strcpy(data2,data);

    for(i=0; i<datal-divl+1; i++){
        if(data2[i] == '1'){
            for(j=0; j<divl; j++){
                if(data2[i+j] == div[j]){
                    data2[i+j] = '0';
                }
                else{
                    data2[i+j] = '1';
                }
            }
        }
    }

    for(i=0; i<datal; i++){
        if(data2[i] != '0'){
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        printf("The signal is : ");
        for(i=0; i<datal-divl+1; i++){
            printf("%c",data[i]);
        }
    }
    else{
        printf("There is an error");
    }
return 0;
}