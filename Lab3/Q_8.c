#include <stdio.h>

void main(){
    int n, i, temp, sum;
    scanf("%d", &n);
    sum = 0;
    for(i=1; i<n; i++){
        temp = n % i;
        if(temp==0){
            sum += i;
        }
    }
    if (sum==n) printf("Perfect\n");
    else printf("Not Perfect\n");
}