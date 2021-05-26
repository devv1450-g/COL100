#include<stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    int count=0;
    while(n!=0)
    {
        n=n&n-1;
        count++;

    }
    printf("%d\n",count);
}