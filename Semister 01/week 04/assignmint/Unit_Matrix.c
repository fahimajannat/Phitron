#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m[n][n];
     int flag=1;
     
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&m[i][j]);
    if(i ==j && m[i][j]!=1){
             flag=0;
            }           
            
        else if(i!=j && m[i][j]!=0){
                  flag=0;                
                }
        }
    }

    if(flag){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
