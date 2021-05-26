#include <stdio.h>

void main(){
    int a, b, count, i ,j;
    count = 0;
    scanf("%d%d", &a, &b);
    for(i = a; i<=b; i++){
        for(j=a; j<=i; j++){
            if(i%j==0) count++;
        }
    }
    printf("%d\n", count);
}