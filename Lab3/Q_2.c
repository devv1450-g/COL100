#include <stdio.h>

void main(){
    int n, i;
    float a, d;
    scanf("%d%f%f", &n, &a, &d);
    for (i=1; i<=n; i++){
        printf("%f ", a);
        a = a + d;
    }
    printf("\n");
}