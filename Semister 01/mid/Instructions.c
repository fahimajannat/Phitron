// Created by M.Mahadi on 2024-10-25 Time:21:05:24
#include <stdio.h>
int main(){
    char a[1005];
    char b[1005];
    char c[1005];
    scanf("%s %s %s",a,b,c);
    char * min = a;
    char * max = a;
    
    if (strcmp(b,min) < 0){
         min = b;}
    if (strcmp(c,min) < 0){ min = c;}
    
    if (strcmp(b,max) > 0) {max = b;}
    if (strcmp(c,max) > 0) {max = c;}
    
    printf("%s \n%s",min,max);
    return 0;
}

