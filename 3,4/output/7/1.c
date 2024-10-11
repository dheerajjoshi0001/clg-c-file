#include <stdio.h>

// Function to find the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;
    unsigned long long result;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate factorial
    result = factorial(number);

    // Output the result
    printf("The factorial of %d is %llu\n", number, result);

    return 0;
}
