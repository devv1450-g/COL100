#include <stdio.h>

void main(){
    int n, z;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        z = 1;
        while(z <= i){
            printf("%d ", z);
            z++;
        }
        printf("\n");
    }
}