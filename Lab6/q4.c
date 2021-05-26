#include<stdio.h>

void main(){
    int a,b;
    scanf("%d%d",&a,&b);
    
    a = a^b;
    int count=0;
    
    while(a!=0){
        a = a&a-1;
        count++;
    }
    printf("%d\n",count);
}