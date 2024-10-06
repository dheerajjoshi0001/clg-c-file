#include <stdio.h>

int main() {
    int days, months, remaining_days;

    // Input the number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Conversion: 1 month = 30 days
    months = days / 30;          // Integer division to get the number of months
    remaining_days = days % 30;   // Modulus operator to get the remaining days

    // Output the result
    printf("%d days is equivalent to %d months and %d days.\n", days, months, remaining_days);

    return 0;
}

