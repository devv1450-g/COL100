#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    scanf("%d", &n);
    float b = rand()%n;
    while(-1*(n-(b*b))>=0.001){
        b = (b + (n/b))/2;    
    }
    printf("%f\n", b);
}