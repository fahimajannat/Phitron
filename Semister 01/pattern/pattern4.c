#include <stdio.h>
int main() { 
    int N;
    scanf("%d",&N);
    char letter = 'A'; 
    for (int i = N; i>=1; i--) {
        for (int j = i; j>=1; j--) {
            printf("%c ", letter);
        }
        letter++; 
        printf("\n"); 
    }

    return 0;
}
/*
A A A A A A A 
B B B B B B 
C C C C C 
D D D D 
E E E 
F F 
G 
*/