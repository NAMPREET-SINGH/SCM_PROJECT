#include <stdio.h>

int main() {
    float height, weight, bmi;
    
    printf("Welcome to the BMI Calculator!\n");
    printf("------------------------------\n");

    printf("Enter your height in meters: ");
    scanf("%f", &height);
    
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    
    bmi = weight / (height * height);
    
    printf("--------------------\n");
    printf("Your BMI is: %.2f\n", bmi);
    printf("--------------------\n");
    
    if (bmi < 18.5) {
        printf("* You are underweight.\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("* You are normal weight.\n");
    } else if (bmi >= 25 && bmi < 30) {
        printf("* You are overweight.\n");
    } else {
        printf("* You are obese.\n");
    }
    
    if (bmi >= 18.5 && bmi < 25) {
        printf("* You have a healthy BMI.\n");
    } else {
        printf("* You have an unhealthy BMI.\n");
    }
    
    if (bmi < 18.5) {
        printf("* You may need to gain weight.\n");
    } else if (bmi >= 25) {
        printf("* You may need to lose weight.\n");
    }
    
    printf("---------------------------------\n");
    printf("Thank you for using the BMI Calculator!\n");
    
    return 0;
}
