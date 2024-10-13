#include<stdio.h>
int main(){
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(a-b+c==d || a+b-c==d ||a*b+c==d || a+b*c==d ||a-b*c==d ||a*b-c==d || b + c - a == d || b + c * a == d || b - c + a == d || b * c - a == d || c + a - b == d || c + a * b == d || c - a + b == d){
        printf("YES");
    }
  

    else{
        printf("NO");
    }
    return 0;
}