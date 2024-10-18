<<<<<<< HEAD
#include<stdio.h>
int main(){
    long long a,b,k;
    scanf("%lld %lld %lld", &a,&b,&k);
    if( a % k == 0 && b % k == 0){
        printf("Both\n");
    }
    else if(a%k==0){ 
        printf("Memo\n");
    }
    else if(b%k==0){
        printf("Momo\n");
    }
    else{
        printf("No One\n");
    }
    
=======
#include<stdio.h>
int main(){
    long long a,b,k;
    scanf("%lld %lld %lld", &a,&b,&k);
    if( a % k == 0 && b % k == 0){
        printf("Both\n");
    }
    else if(a%k==0){ 
        printf("Memo\n");
    }
    else if(b%k==0){
        printf("Momo\n");
    }
    else{
        printf("No One\n");
    }
    
>>>>>>> 182f347b0cc18f1fcfc6de3dc65263cf20b48383
}