
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    int a[n + 5];
    int f[10000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        f[a[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (f[i] == 1)
        {
            ans++;
        }
        
    }
   printf("%d \n",ans);
}
