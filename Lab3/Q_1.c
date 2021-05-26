#include <stdio.h>

void main(){
    int num_1, rev, temp;
    scanf("%d", &num_1);
    temp = num_1;
    while (temp>0){
        rev *= 10;
        rev += (temp % 10);
        temp /= 10;
    }
    if (rev == num_1) printf("Palindrome\n");    
    else printf("Not a Palindrome\n");
  
}