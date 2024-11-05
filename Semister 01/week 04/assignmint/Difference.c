#include<stdio.h>
int main(){
   int a;
   int b;
   int *x= &a;
   int *y= &b;
   scanf("%d %d",x,y);
   int difference=abs(*x-*y);
   printf("%d\n",difference);
   
   return 0;
}