#include <stdio.h>

int main() {
    int repeat;
    float C, F;
    char choice;

    do {
        printf("What do you want to convert? (C/F): "); 
        scanf(" %c", &choice);
        
        if (choice == 'C' || choice == 'c') {
            printf("Enter temperature in Celsius: ");
            scanf("%f", &C);
            F = (C * 9.0/5.0) + 32;
            printf("%.2f Celsius is equal to %.2f Fahrenheit\n", C, F);
        } else if (choice == 'F' || choice == 'f') {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &F);
            C = (F - 32) * 5.0/9.0;
            printf("%.2f Fahrenheit is equal to %.2f Celsius\n", F, C);
        } else {
            printf("Invalid choice. Please enter 'C' or 'F'.\n");
        }
        
        // Ask the user if they want to run it again
        printf("\nDo you want to perform another conversion? (1 for Yes, 0 for No): ");
        scanf("%d", &repeat);
        printf("\n"); // Just adds a blank line for readability

    } while (repeat == 1);

    printf("Goodbye!\n");
    return 0;
}