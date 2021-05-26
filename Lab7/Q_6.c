#include<stdio.h>

#define MAX 100

int A[MAX];

int array_input(int n){
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    return A[n];
}

void main(){
    int n;
    scanf("%d", &n);
    // input of array
    array_input(n);
    // comapring
    int larger, smaller;
    larger = A[0];
    smaller = A[0];
    for(int i=1; i<n; i++){
        
    }
}