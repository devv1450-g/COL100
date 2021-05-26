#include <stdio.h>
#include <math.h>

void main(){
    float x_degree, x, i, value, y, fac, i_fac, cos;
    scanf("%f", &x_degree);
    x = x_degree * (3.14/180);
    y = 1;
    for(i=2; i<=12; i += 2){
        i_fac = 1;
        fac = i;
        while(i_fac<i){
            fac *= i_fac++;
        }
        value = (pow(x, i) * pow(-1, y)) / fac;
        cos += value;
        y++;
    }
    printf("%0.3f\n", 1+cos);
}