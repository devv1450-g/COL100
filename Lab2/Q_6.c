#include <stdio.h>

void main(){
    long long int a, b, n, i;
    scanf("%d", &n);
    for (a=1, b=0, i=1; i<n; b=a-b, i++){   // f(0)=b, f(1)=a , f(n-1)=a, f(n-2)=b
        a = a + b; // f(n) = f(n-1) + f(n-2)
    
    }
    printf("%d\n", a);
}