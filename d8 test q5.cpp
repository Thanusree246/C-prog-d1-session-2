#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int square = num * num;
    double squareRoot = sqrt(num);
    int cube = num * num * num;

    printf("Square of %d is %d\n", num, square);
    printf("Square root of %d is %.2f\n", num, squareRoot);
    printf("Cube of %d is %d\n", num, cube);

    return 0;
}
