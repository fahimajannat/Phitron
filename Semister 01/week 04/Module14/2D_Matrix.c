#include <stdio.h>
int main()
{
    int n, m ,x;
    scanf("%d %d", &n, &m, &x);
    int a[n+5][m+5][x+5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int a[1][2]=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// KANA FILE ER VATOR KONO SPACE RAKA JABE NA