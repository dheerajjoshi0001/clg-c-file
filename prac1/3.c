#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simpleInterest, compoundInterest;
    int compoundFrequency;

    // Input principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Input compound frequency (e.g., 1 for annual, 4 for quarterly, etc.)
    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &compoundFrequency);

    // Calculate Compound Interest
    compoundInterest = principal * pow((1 + rate / (compoundFrequency * 100)), compoundFrequency * time) - principal;

    // Display results
    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
