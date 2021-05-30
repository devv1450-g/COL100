#include<stdio.h>
 
int isSorted(int A[], int n);

void main(){
   int n;
   scanf("%d", &n);
   int A[n];
   for(int i=0; i<n; i++){
       scanf("%d", &A[i]);
   }
   if(isSorted(A, n)) printf("true\n");
   else printf("false\n");
}


int isSorted(int A[], int n){
    int check = 0;
    if(A[0]<A[1]){
        for(int i=1; i<n; i++){
            if(A[i-1]<A[i]){
                check = 1;
            }
            else return 0;
        }
        return 1;
    }
    else{
        for(int i=1; i<n; i++){
            if(A[i-1]>A[i]){
                check = 1;
            }
            else return 0;
        }
        return 1;
    }
}