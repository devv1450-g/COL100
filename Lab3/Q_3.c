#include <stdio.h>

void main(){
    int n, i;
    i = 1;
    float num, sum;
    sum = 0;
    scanf("%d", &n);
    while(i<=n){
        scanf("%f", &num);
        sum += num;
        i++;
    }
    printf("%f\n", sum);
}