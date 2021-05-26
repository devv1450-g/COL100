#include <stdio.h>
#include <math.h>

void main(){
    int n, i, temp, num_digit, sum, digit;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum = 0;
        num_digit = 0;
        temp = i;
        while(temp!=0){
            temp = temp/10;
            num_digit++;
        }
        temp = i;
        while(temp!=0){
            digit = temp%10;
            temp = temp/10;
            sum = sum + pow(digit, num_digit);
        }
     
        if(sum == i){
            printf("%d ", i);
        }

    }
}