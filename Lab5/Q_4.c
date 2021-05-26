#include <stdio.h>
#include <math.h>

void main(){
    int n, temp, sum, i;
    scanf("%d", &n);
    sum = 0;
    if(n==1){
        int bin;
        scanf("%d", &bin);
        i = 0;
        while(bin!=0){
            temp = bin%10;
            bin = bin/10;
            sum = sum + pow(2,i)*temp;
            i++;
        }
        printf("%d\n", sum);
    }
    if(n==2){
        unsigned int dec, posi;
        scanf("%u", &dec);
        for(i=31; i>=0; i--){
            posi = 1 << i;
            printf("%d", (dec & posi ? 1 : 0));
        }
        printf("\n");
    }
}