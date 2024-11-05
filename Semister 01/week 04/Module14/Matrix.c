#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m[n][n];
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            scanf("%d",&m[i][j]);
        }
    }
    int main_diagonat=0, sec_diagont=0;
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                main_diagonat+=m[i][j];
            }
            if(i+j==n-1){
                sec_diagont+=m[i][j];
            }
        }
    }
    int diff = abs(main_diagonat-sec_diagont);
    printf("%d\n",diff);
    return 0;
}