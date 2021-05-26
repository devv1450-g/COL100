#include <stdio.h>
#include <math.h>

void main(){
    float a, b, c;
    printf("Enter the 3 variables  ");
    scanf("%f%f%f", &a, &b, &c);
    float d = (b*b)-(4*a*c);
    if (d > 0){
        float sqrt_d = sqrt(d);
        printf("Root are real and different ");
        printf("%0.3f ", (-b - sqrt_d) / (2 * a));
        printf("%0.3f\n ", (-b + sqrt_d) / (2 * a));
    }
    else if (d == 0){
        printf("Roots are real and equal ");
        printf("%0.3f\n", -b / (2 * a));

    }
    else {
        printf("No real roots\n");
    }
}