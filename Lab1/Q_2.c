#include <stdio.h>

void main(){
    int num, ones, tens, hun, thou;
    printf("Enter 4 digit number : ");
    scanf("%d", &num);
    ones = num%10;
    tens = num%100;
    hun = num%1000;
    thou = num%10000;
    
    int d4, d3, d2, d1;
    d1 = ones;
    d2 = (tens-ones)/10;
    d3 = (hun-tens)/100;
    d4 = (thou-hun)/1000;
    if (d1!=0){
        printf("%d\nValid\n", d1*1000+d2*100+d3*10+d4);
    }
    else{
        printf("%d\nInvalid\n", d1*1000+d2*100+d3*10+d4);
    }
}