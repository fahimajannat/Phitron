#include <stdio.h>
int main() { 
    int N;
    scanf("%d",&N);
    char letter = 'a'; 
    for (int i = 1; i <=N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", letter);
        }
        letter++; 
        printf("\n"); 
    }

    return 0;
}
/*
a 
b b 
c c c 
d d d d 
e e e e e 
f f f f f f 
g g g g g g g 

*/