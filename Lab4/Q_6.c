#include <stdio.h>

void main(){
    int a, b, i, j, k, count;
    count = 0;
    scanf("%d%d", &a, &b);
    for(i=a; i<=b; i++){
        for(j=i; j>=a; j--){
            if(i%j==0 && j!=1){
                count++;
            }
            else {
                for(k=j; k>=a; k--){
                    if(j%k==0 && i%k==0 && k!=1){
                        count++;
                        break;
                    }
                }
            }
        }
    }
    printf("%d\n", count);
}