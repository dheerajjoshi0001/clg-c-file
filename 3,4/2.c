#include <stdio.h>
 int main()
{

int a, b;
int sum, difference, product, quotient, remainder;
printf("Enter two integers (a and b): "); scanf("%d %d", &a, &b);
sum = a + b; difference = a - b; product = a * b; quotient = a / b; remainder = a % b; printf("Results:\n");
printf("Sum: %d + %d = %d\n", a, b, sum); printf("Difference: %d - %d = %d\n", a, b,
difference);
printf("Product: %d * %d = %d\n", a, b, product);
if (b != 0) {
printf("Quotient: %d / %d = %d\n", a, b, quotient);
printf("Remainder: %d %% %d = %d\n", a, b, remainder);
} else {
printf("Quotient and Remainder: Division by zero is not allowed.\n");

return 0;
}
