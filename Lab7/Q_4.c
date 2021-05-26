#include<stdio.h>

void main(){
    int n, i;
    scanf("%d", &n);
    int A[n];
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    int t, check;
    for(i=0; i<n; i++){
        check = 0;
        for(int j=i+1; j<n; j++){
            if(A[i]==A[j]){  
                check = 0;
                break;
            }
            else{
                check = 1;
            }
        }
        if(check==1){
            t = i;
            break;
        }
    }
    printf("%d\n", A[t]);
}