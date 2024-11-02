#include <stdio.h>
#include <string.h>
int main()
{
   char s1[1005];
   char s2[1005];
   char s3[1005];
   scanf("%s %s %s", s1, s2, s3);
   char min[1005];
   char max[1005];
   strcpy(min, s1);
   strcpy(max, s1);
   if (strcmp(s2, min) < 0)
   {
      strcpy(min, s2);
   }
   if (strcmp(s3, min) < 0)
   {
      strcpy(min, s3);
   }

   if (strcmp(s2, max) > 0)
   {
      strcpy(max, s2); 
   }
   if (strcmp(s3, max) > 0)
   {
      strcpy(max, s3); // max kno bujco? hmmno bol to copy korsi ti bulhoica
      ai kane copy kokon korbo jokon amar max ae valu taka boro kono string pabo tai amar compare korta hobe 
      max er sate ok? 
      akon submit koira da 
   }
   printf("%s\n%s", min, max);
   return 0;
}
