#include <stdio.h>

void main(){
    float l, w, h, r1, h1, r2;
    scanf("%f%f%f", &l, &w, &h);
    scanf("%f%f", &r1, &h1); 
    scanf("%f", &r2);
    printf("%0.2f\n", l*w*h);
    printf("%0.2f\n", r1*r1*h*3.14159265);
    printf("%0.2f\n", (4/3)*3.14159265*r2*r2*r2);
  
}