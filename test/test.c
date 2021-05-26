#include<stdio.h>
 
void main(){
   int n=12;
   for(int i=1; i<n; i++){
      n = n-1;
      if(n==10){
         ;
      }
   }
   printf("%d", n);
}