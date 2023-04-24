#include <stdio.h>
#include <math.h>

int power(int x, int n) {
    return pow(x, n);
}

int add(int x, int n) {
    return x + n;
}

int sub(int x, int n) {
    return x - n;
}

int mul(int x, int n) {
    return x * n;
}
int main() {
    int choice, x, n, result;

    do {
        printf("\nChoose an operation:\n");
        printf("1. Power\n");
        printf("2. Add\n");
        printf("3. Subtract\n");
        printf("4. Multiply\n");
        printf("5. Divide\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice != 0) {
            printf("Enter the operands x and n: ");
            scanf("%d %d", &x, &n);

            switch (choice) {
                case 1:
                    result = power(x, n);
                    printf("Result: %d\n", result);
                    break;
                case 2:
                    result = add(x, n);
                    printf("Result: %d\n", result);
                    break;
                case 3:
                    result = sub(x, n);
                    printf("Result: %d\n", result);
                    break;
                case 4:
                    result = mul(x, n);
                    printf("Result: %d\n", result);
                    break;
                case 5:
                    
                    printf("Result: %d\n", result);
                    break;
                default:
                    printf("Invalid choice!\n");
            }
        }

    } while (choice != 0);

    return 0;
}
