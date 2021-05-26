#include <stdio.h>

void main(){
    int x, sum;
    sum = 0;
    x = 102;
    while(x>=100 && x<=999){
        sum += x;
        x += 17;   
    }
    printf("%d\n", sum);
}