#include <stdio.h>

void main(){
    char shape;
    printf("Enter the shape : ");
    scanf("%s", &shape);
    if (shape == 'C' || shape == 'c'){
        float r;
        scanf("%f", &r);
        printf("Area of circle : %0.2f \n", 3.14158265*r*r);
            
    }
    else if(shape == 'R' || shape == 'r'){
        float l, w;
        scanf("%f%f", &l, &w);
        printf("Area of rectangle : %0.2f \n", l*w);

    }
    else if(shape == 'T' || shape == 't'){
        float b, h;
        scanf("%f%f", &b, &h);
        printf("Area of triangle : %0.2f \n", 0.5*b*h);
    }
    
    else {
        printf("Invalid Input\n");
    }

}