#include <stdio.h>

void main(){
    float p1, p2, t1, t2, d1, d2;
    printf("Enter the price, disount, tax of sweater : ");
    scanf("%f%f%f", &p1, &d1, &t1);
    printf("Enter the price, disount, tax of shoes : ");
    scanf("%f%f%f", &p2, &d2, &t2);
    if (p1>0 && p2>0 && t1>=0 && t2>=0 && d1>=0 && d2>=0 && t1<=100 && t2<=100 && d1<=100  && d2<=100){
            float total1 = p1 + ((p1*t1)/100) - ((p1 + ((p1*t1)/100))*d1)/100;
            float total2 = p2 + ((p2*t2)/100) - ((p2 + ((p2*t2)/100))*d2)/100;
            float total = total1 + total2;
            printf("Total price : %f\n", total);
    }
    else {
        printf("Invalid input\n");
    }

}