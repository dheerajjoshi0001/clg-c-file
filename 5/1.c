#include <stdio.h>

#define FAHRENHEIT_TO_CELSIUS(f) ((f - 32) * 5 / 9)

int main()
{
float fahrenheit, celsius;
printf("Enter temperature in Fahrenheit: "); scanf("%f", &fahrenheit);
celsius = FAHRENHEIT_TO_CELSIUS(fahrenheit); printf("Temperature in Celsius: %.2f\n", celsius);

return 0;
}