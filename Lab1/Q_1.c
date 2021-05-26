#include <stdio.h>

void main(){
    float num_1 , num_2 ;
    printf("Enter the first number ");
    scanf("%f", &num_1);
    printf("Enter the second number ");
    scanf("%f", &num_2);
    printf("Sum = %f\n", num_1 + num_2);
    printf("Subtraction = %f\n", num_1 - num_2);
    printf("Multiplication = %f\n", num_1 * num_2);
    printf("Division = %f\n", num_1 / num_2);
    int a=  num_1;
    int b=  num_2;
    printf("Modulus = %d\n", a % b);
}
