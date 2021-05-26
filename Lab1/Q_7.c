#include <stdio.h>

void main(){
    int num_side;
    printf("Enter the number of sides : ");
    scanf("%d", &num_side);
    float angle = ((1.0*num_side-2)*180)/num_side;  //finding the interior angle
    if (num_side>2){
        printf("Interior Angle of each side : %f\n", angle);
    }
    else {
        printf("Invalid input\n");
    }
}
