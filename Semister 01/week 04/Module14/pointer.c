#include<stdio.h>
int main(){
    int x = 10;
int *p = &x;
int y = 20;
*p = ++y;
x++;
printf("%d",x);
}