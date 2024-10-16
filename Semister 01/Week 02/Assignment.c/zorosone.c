#include<stdio.h>
int main(){
    int N ,cnt_zero=0, cnt_one=0;
    scanf("%d",&N);

    for(int i=0; i<N; i++){
      int num;
      scanf("%d",&num);
       if(num==0){
        cnt_zero++;
        
       }
       else{
        cnt_one++;

       
       
       }
      
        
    }
    printf("%d %d\n",cnt_zero,cnt_one);

   return 0;
}