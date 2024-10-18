<<<<<<< HEAD
#include<stdio.h>
int main(){
    int A,B,C;
    char S,Q;
    int sum=0;
    int sub=0;
    int maltiplication=0;
    scanf("%d %c %d %c %d",&A,&S,&B,&Q,&C);
    if(S == '+' && Q == '=' ){
        if( A + B == C ){
            printf("Yes\n");
        }
        else{
            sum=A+B;
            printf("%d",sum);

        }
    }
        else if(S =='-' && Q =='='){
            if(A-B==C){
                printf("Yes\n");
            }
            else{
                sub=A-B;
                printf("%d",sub);
            }
        }
        else{
            if(A*B==C){
                printf("Yes\n");
            }
            else{
                maltiplication=A*B;
                printf("%d",maltiplication);

            }
        }
        

        
    }

=======
#include<stdio.h>
int main(){
    int A,B,C;
    char S,Q;
    int sum=0;
    int sub=0;
    int maltiplication=0;
    scanf("%d %c %d %c %d",&A,&S,&B,&Q,&C);
    if(S == '+' && Q == '=' ){
        if( A + B == C ){
            printf("Yes\n");
        }
        else{
            sum=A+B;
            printf("%d",sum);

        }
    }
        else if(S =='-' && Q =='='){
            if(A-B==C){
                printf("Yes\n");
            }
            else{
                sub=A-B;
                printf("%d",sub);
            }
        }
        else{
            if(A*B==C){
                printf("Yes\n");
            }
            else{
                maltiplication=A*B;
                printf("%d",maltiplication);

            }
        }
        

        
    }

>>>>>>> 182f347b0cc18f1fcfc6de3dc65263cf20b48383
