#include <stdio.h>

void main(){
    int time;
    printf("Enter the time ");
    scanf("%d", &time);
    int min = time%100;
    if (min<=60 && time<=2400 && time>=0){
        printf("Minutes passed : %d \n", min+60*((time-min)/100));
    }
    else {
        printf("Invlaid Input\n");
    }
}