#include <stdio.h>

void main(){
    int n, temp, z;
    scanf("%d", &n);
    for(int i=n; i>0; i--){
        temp = i;
        z = 1;
        while(z <= i){
            printf("%d ", temp);
            z++;
            temp--;
        }
        printf("\n");
    }
}