#include <stdio.h>

int main() {
    char name[50];
    char address[100];

    printf("Enter your name: ");
    scanf("%[^\n]%*c", name); // %[^\n] to take input with spaces

    printf("Enter your address: ");
    scanf("%[^\n]%*c", address); // %[^\n] to take input with spaces

    printf("\nYour Name: %s\n", name);
    printf("Your Address: %s\n", address);

    return 0;
}          
