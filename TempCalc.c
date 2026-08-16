#include <stdio.h>
int main(){
    float C, F;
    char choice;
    printf("What do you want to convert? (C/F): "); 

    scanf(" %c", &choice);
    if(choice == 'C' || choice == 'c'){
        printf("Enter temperature in Celsius: ");
        scanf("%f", &C);
        F = (C * 9/5) + 32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", C, F);
    } else if(choice == 'F' || choice == 'f'){
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &F);
        C = (F - 32) * 5/9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", F, C);
    } else {
        printf("Invalid choice. Please enter 'C' or 'F'.\n");
    }
    return 0;
}