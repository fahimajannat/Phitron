#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    int  N;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        if(N%3==0|| N%5==0){
            printf("Yes\n");
           
        }
        else{
            printf("No\n");
           
        }
    }

       
    return 0;
}
