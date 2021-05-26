#include <stdio.h>

void main(){
    int num1, num2, temp;
    scanf("%d%d", &num1, &num2);
    if(num2 > num1){
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    
    for(int i=num1; i>0; i--){
        temp = num1 % i;
        if(temp==0 && num2%i==0){
            printf("%d", i);
            break;
        }
    }
}