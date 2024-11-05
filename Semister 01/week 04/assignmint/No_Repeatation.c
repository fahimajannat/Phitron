#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    
    int count[100001] = {0}; 

    // Read the array of integers and update counts
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        count[num]++;
    }

    
    int unique_count = 0;
    for (int i = 1; i <= 100000; i++) {
        if (count[i] == 1) {
            unique_count++;
        }
    }
    printf("%d\n", unique_count);

    return 0;
}
