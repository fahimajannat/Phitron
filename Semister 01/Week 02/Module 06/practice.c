#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch == 'z')
    {
        printf("a");
       
    }
    else if (ch >= 'a' && ch <= 'z')
    {
         printf("%c", ch + 1);
    }
    return 0;
}

