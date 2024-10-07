#include<stdio.h>
int main(){
     int mark;
     scanf("%d",&mark);
     if(mark >= 80 && mark <= 100){
          printf("You have got A+ Grade\n");
     }
     else if(mark >= 70 && mark <= 79){
          printf("You have got A Grade\n");
     }
     else if(mark >=60 && mark <= 69){
          printf("You have got A- Grade\n");
     }
     else if(mark >= 50 && mark <= 59){
          printf("You have got B Grade\n");
     }
     else if(mark >=40 && mark <= 49){
          printf("You have got C Grade\n");
     }
     else if(mark >= 33 && mark <= 39){
          printf("You have got D Grade\n");
     }
     else if(mark >=0 && mark <= 32){
          printf("You have got F Grade\n");
     }
     else {
          printf("Invalid Maek\n");
     }

     return 0;
}