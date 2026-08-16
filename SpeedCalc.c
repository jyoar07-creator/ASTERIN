#include <stdio.h>

int main() {
    float kmh, knots, mph;
    int repeat;

    do {
        // 1. Get user input
        printf("Enter speed in Kilometers per Hour (km/h): ");
        scanf("%f", &kmh);

        // 2. Perform calculations
        knots = kmh * 0.539957;
        mph = kmh * 0.621371;

        // 3. Display the results formatted to two decimal places
        printf("\n--- Speed Conversions ---\n");
        printf("%.2f km/h is equal to:\n", kmh);
        printf("%.2f Knots\n", knots);
        printf("%.2f MPH\n", mph);
        printf("-------------------------\n");

        // 4. Ask to repeat
        printf("\nDo you want to convert another speed? (1 for Yes, 0 for No): ");
        scanf("%d", &repeat);
        printf("\n"); // Adds a blank line for readability in the terminal

    } while (repeat == 1);

    printf("Safe flying! Goodbye.\n");

    return 0;
}