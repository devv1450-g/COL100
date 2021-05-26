#include <stdio.h>
#include <math.h>

void main(){
    int n, i, j, check, count, count_prime;
    scanf("%d", &n);
    count = 0;
    i = 2;
    count_prime = 0;
    for(i = 2; ; i++){
        for(j = 2; j<=sqrt(i); j++){
            check = 1;
            if(i%j==0){
                check = 0;
                break;
            }
        }
        if(count_prime<1) {
            printf("2 3 ");
            count_prime = 2;
            count = 2;
        }
        if(check==1){
            printf("%d ", i);
            count++;
            count_prime++;
        }
        if(count==n){
            printf("\n");
            count = 0;
        }
        if(count_prime==n*n){
            break;
        }
    }
    printf("\n");
}