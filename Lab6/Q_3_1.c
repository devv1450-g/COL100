#include <stdio.h>

void main(){
    int n, sum;
    sum = 0;
    scanf("%d", &n);
    for(int i=0; i<=31; i++){
        int posi = 1 << i;
        if(n & posi){
            sum++;
        }
    }
    printf("%d\n", sum);
}