#include<stdio.h>
 
void main(){
   int n;
   scanf("%d", &n);
   int A[n];
   for(int i=0; i<n; i++){
       scanf("%d",&A[i]);
   } 
   int ct = 0;
   for(int i=0; i<n; i++){
       for(int j=i+1; j<n; j++){
           if(A[i]==A[j]){
               printf("%d ", A[i]);
               ct++;
               break;
           }
       }
   }
   if(ct==0){
       printf("no duplicates!");
   }
}