#include <stdio.h>

int isComposite(int num) {
    if(num <= 1) {
        return 0;
    }
    for(int i=2; i<=num/2; i++) {
        if(num%i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[100], n, count=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Composite numbers in the array: ");
    for(int i=0; i<n; i++) {
        if(isComposite(arr[i])) {
            count++;
            printf("%d ", arr[i]);
        }
    }
    printf("\nTotal number of composite numbers: %d\n", count);
    return 0;
}
