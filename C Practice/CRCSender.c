#include<stdio.h>
#include<string.h>
int main(){
    char data[100],div[20];
    int i,j,datal,divl;
    printf("Enter data : ");
    scanf("%s",data);
    printf("Enter divisor : ");
    scanf("%s",div);

    datal = strlen(data);
    divl = strlen(div);

    char data2[100];

    strcpy(data2,data);
    j = datal;
    for(i=1; i<divl; i++){
        data2[j] = '0';
        j++;
    }
    data2[j] = '\0';
    for(i=0; i<datal; i++){
        if(data2[i] == '1'){
            for(j=0; i<divl; j++){
                if(data2[i+j] == div[j]){
                    data2[i+j] = '0';
                }
                else{
                    data2[i+j] = '1';
                }
            }
        }
    }
    j = datal;
    for(i=0; i<divl-1; i++){
        data[j] = data2[j];
        j++;
    }
    printf("The codeword is %s",data);
    return 0;
}