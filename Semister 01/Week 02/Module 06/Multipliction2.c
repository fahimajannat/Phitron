//All togeher
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int j=1; j<=n;j++){
        for(int i=1; i<=5;i++){
            printf("%d x %d = %d\n",j,i,j*i);
        }
        printf("\n\n");
    }

}