#include<stdio.h>

#define MAX 100000

int A[MAX];
int count = 0;
int check = 0;

int array_input(int n){
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    return A[n];
}

int count_final_array(int A[], int n){
    for(int i=0; i<n; i++){
        check = 0;
        for(int j=i-1; j>=0; j--){
            if(A[j]==A[i]){
                check = 1;
                break;
            }
        }
        if(check) continue;
        count++;
    }
    return count;
}

int print_final_array(int A[], int n){
        for(int i=0; i<n; i++){
        check = 0;
        for(int j=i-1; j>=0; j--){
            if(A[j]==A[i]){
                check = 1;
                break;
            }
        }
        if(check) continue;
        printf("%d ", A[i]);
    }
}

void main(){
    int n;
    scanf("%d", &n);

    array_input(n);

    printf("%d\n", count_final_array(A, n));

    print_final_array(A, n);
}