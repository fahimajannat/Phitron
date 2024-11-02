#include<stdio.h>

#include <string.h>
int main()
{
char a[] = "hello";
char b[] = "world";
char c[] = "hello world";
strcat(b,a);
strcpy(c,b);
printf("%d",strcat(c));
}
/*
#include<stdio.h>
int main(){
    char str[20];
   // scanf("%[^\n]s", str);
   gets(str);
    printf("%s",str);
    return 0;
}
*/
