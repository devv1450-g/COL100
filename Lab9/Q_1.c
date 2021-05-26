#include <stdio.h>

int findElement(int A[],int n){
    for(int i=1; i<n; i++){
        int sum1 = 0, sum2 = 0;
        for(int j=0; j<i; j++){
            sum1 += A[j];
        }
        for(int j=i+1; j<n; j++){
            sum2 += A[j];
        }
        if(sum1 == sum2) return 1;
    }
    return 0;
}

int arr_input(int n){
    int A[n];
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);    
    }
    return A[n];
}

int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);    
    }
    if(findElement(A, n)) printf("1\n");
    else printf("0\n");
    
    
}