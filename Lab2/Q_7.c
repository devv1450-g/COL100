#include <stdio.h>

void main(){
    int n, i;
    unsigned long long fact;
    scanf("%d", &n);
    i = 1;
    fact = 1;
    while(i<=n){
        fact *= i;
        i++;
    }
    printf("Factorial = %d \n", fact);
}