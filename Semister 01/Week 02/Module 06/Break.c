#include<stdio.h>
int main(){
   for(int i =100; i<=300;i++){
    printf("checking %d\n", i);
    if(i % 2 == 0 && i % 3==0 && i % 5==0){
        printf("is the numder %d\n", i);
        break;
    }
   }
   return 0;
}
/*output
checking 100
checking 101
checking 102
checking 103
checking 104
checking 105
checking 106
checking 107
checking 108
checking 109
checking 110
checking 111
checking 112
checking 113
checking 114
checking 115
checking 116
checking 117
checking 118
checking 119
checking 120
is the numder 120

*/