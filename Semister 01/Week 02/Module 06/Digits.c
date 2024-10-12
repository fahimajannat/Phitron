#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        int n; 
        scanf("%d", &n);
        if(n==0){
         printf("0");  
        }
        while(n>0){
            int digit = n %10;
            printf("%d ",digit);
            n/=10;

        }
        printf("\n");

    }
    return 0;

}
/*
input
4
1234
86756
49
690
*/
/*
output
4 3 2 1 
6 5 7 6 8 
9 4 
0 9 6 

*/