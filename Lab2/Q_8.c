#include <stdio.h>

int main(){
    int year, r1, r2, r3;
    scanf("%d", &year);
    r1 = year%4;
    r2 = year%100;
    r3 = year%400;
    if (r1==0){     // checking for number is divisible by 4 
      if(r2==0){    // checking for century year
            if(r3==0) printf("Leap year\n");  // century year should be divisible by 400 
            else printf("Not a leap year\n");
        }
      else printf("Leap year\n");
     }         
     else printf("Not a leap year\n");
    
}