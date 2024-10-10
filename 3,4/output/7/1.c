#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative, zero, or positive
    if (num < 0)
        printf("Factorial of a negative number doesn't exist.\n");
    else {
        // Calculate the factorial
        for(i = 1; i <= num; ++i) {
            factorial *= i;
        }
        // Output the result
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
