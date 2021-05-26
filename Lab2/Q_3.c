#include <stdio.h>
#include <math.h>

void main(){
    int  num, i, remainder;
    scanf("%d", &num);  // taking input form user
    double s = sqrt(num);  //finding squre root of number provided by user
    for (i=2; i<=s; i++){      // checking the divisibilty till square root of given number
        remainder = num%i;  
        if (remainder == 0) printf("Not a Prime Number \n"); break; // if the number is divisible by any number then then code breaks
    }
    if (remainder != 0) printf("It is a Prime Number\n");  
}