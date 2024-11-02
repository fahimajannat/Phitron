#include<stdio.h>
int main(){
    int N,X,Y;
    int count=0;
    scanf("%d %d %d",&N,&X,&Y);
    int price; 
    for(int i=0; i<N; i++){
        scanf("%d",&price);
        if(price >=X && price<=Y){
            count++;
        }
    }
printf("%d\n",count);
    
return 0;
}