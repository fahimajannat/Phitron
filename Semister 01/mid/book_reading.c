#include<stdio.h>
int main(){

int N,T;
scanf("%d %d",&N,&T);
int a[N];
for(int i=0; i<N; i++){
    scanf("%d",&a[i]);
}
int time=0;
int count=0;
for(int i=0; i<N;i++){
    

if(time + a[i]<=T)
{
    time=a[i]+time;
    count++;
}
}
printf("%d\n",count);


}

