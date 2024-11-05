#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, m ,x;
    scanf("%d %d %d", &n, &m, &x);
    int a[n+5][m+5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
   for(int i=0;i<x;i++){
    int number;
    scanf("%d",&number);
    int count=0;
   

    for (int r = 0; r<n; r++)
    {
        for (int c = 0; c<m; c++)
        {
            if(a[r][c] == number){
                count++;
        }
           
        }
        
    }
    printf("%d\n",count);
    
   }
}