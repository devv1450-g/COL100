#include<stdio.h>

#define MAX 100 

void main(){
   int matrix[MAX][MAX];
   int copy[MAX][MAX];
   int n;
   scanf("%d",&n);
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%d",&matrix[i][j]);
    }
   }
   for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           copy[j][i] = matrix[i][j];
       }
   }
   printf("Tranpose matrix\n");
   for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           printf("%d ", copy[i][j]);
       }
       printf("\n");
   } 
}

