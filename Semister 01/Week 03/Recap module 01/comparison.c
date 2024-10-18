<<<<<<< HEAD
#include<stdio.h>
int main(){
    int a,b;
    char s;
    scanf("%d %c %d", &a, &s, &b);
    if(s =='>'){
        if(a > b){
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        }
    }
    else if(s =='<'){
        if(a < b){
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        }
    }
    else{
        if(a == b){
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        } 
    }
    return 0;
=======
#include<stdio.h>
int main(){
    int a,b;
    char s;
    scanf("%d %c %d", &a, &s, &b);
    if(s =='>'){
        if(a > b){
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        }
    }
    else if(s =='<'){
        if(a < b){
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        }
    }
    else{
        if(a == b){
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        } 
    }
    return 0;
>>>>>>> 182f347b0cc18f1fcfc6de3dc65263cf20b48383
}