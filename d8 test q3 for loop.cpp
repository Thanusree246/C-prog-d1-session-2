#include <stdio.h>

int main() {
    int n, factorial = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        factorial *= i;
        sum += factorial;
    }

    if (n == sum) {
        printf(" factorial %d = %d.\n", n, n);
    } else {
        printf("%d is not the sum of the multiplication of all integers smaller than %d.\n", n, n);
    }

    return 0;
}
