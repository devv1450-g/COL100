#include <stdio.h>
#include <math.h>

void main(){
    int a, b, i, j, k, ct;
    scanf("%d%d", &a, &b);
    for(i=a; i<=b; i++){
        ct = 0;
        for(j=cbrt(i); j>=1; j--){
            for(k=j; k>=1; k--){
                if(pow(j,3)+pow(k,3)==i){
                    ct++;
                }
            }
        }
        if(ct==2){
            printf("%d\n", i);
        }
    }
}