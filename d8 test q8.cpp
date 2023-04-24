#include <stdio.h>

int main() {
    int numRows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &numRows);

    for (i = 1; i <= numRows; i++) {
       
        for (j = 1; j <= numRows - i; j++) {
            printf("   ");
        }

        
        for (j = i; j >= 1; j--) {
            printf("%-4d", j);
        }

        printf("\n");
    }

    return 0;
}
