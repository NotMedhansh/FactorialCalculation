#include <stdio.h>

long long factorial(int n) {
    if (n < 0) {
        return -1; // Error for negative numbers
    }
    if (n == 0) {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    
    long long result = factorial(number);
    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %lld.\n", number, result);
    }
    
    return 0;
}