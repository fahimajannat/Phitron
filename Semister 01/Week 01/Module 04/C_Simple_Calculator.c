#include<stdio.h>
int main(){
    char X;
    scanf("%c",&X);
    if(X >= '0'&& X <= "9"){
        printf("Is DIGIT\n");
    }
    else{
        printf("ALPHA\n");
        if(X >= 'A' && X <= 'Z'){
            printf("IS CAPITAL\n");
        }
        else{
            printf("IS SMALL\n");
        }
    }
    return 0
}