#include <stdio.h>

int main() {
    int P, Q, R;
    printf("Enter P, Q and R separated by spaces: ");
    scanf("%d %d %d", &P, &Q, &R);

    for (int i = P; i <= Q; i++) {
        int num = i;
        while (num != 0) {
            int digit = num % 10;
            if (digit == R) {
                
                goto skip;
            }
            num /= 10;
        }
        printf("%d ", i);
        skip: continue;
    }

    return 0;
}
