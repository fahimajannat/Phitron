<<<<<<< HEAD
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if('a'<= ch && ch<='z'){
        ch -=32;
    }
    else{
        ch +=32;
    
    }
    printf("%c\n",ch);
    return 0;

}
//b=98 (ascii). B=66  (ascii). 
// 98-66=32 . 
// b-32=66 (B)
// B+32 =98
=======
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if('a'<= ch && ch<='z'){
        ch -=32;
    }
    else{
        ch +=32;
    
    }
    printf("%c\n",ch);
    return 0;

}
//b=98 (ascii). B=66  (ascii). 
// 98-66=32 . 
// b-32=66 (B)
// B+32 =98
>>>>>>> 182f347b0cc18f1fcfc6de3dc65263cf20b48383
