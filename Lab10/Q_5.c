#include<stdio.h>

#define MAX 100

int rearranges_x(int A[], int x, int size, int x_index);
int index_of_x(int A[], int x, int size);
int check_arrange(int A[], int x, int size, int x_index);
int swap(int A[], int i, int x_index);

void main(){
   int A[MAX], n;
   scanf("%d", &n);
   for(int i=0; i<n; i++){
      scanf("%d", &A[i]);
   }
   int x;
   scanf("%d",&x);
   rearranges_x(A, x, n, index_of_x(A, x, n));
   for(int i=0; i<n; i++){
      printf("%d ", A[i]);
   }  
   printf("\n");
}

int index_of_x(int A[], int x, int size){
   for(int i=0; i<size; i++){
      if(A[i]==x) return i;
   }
}

int rearranges_x(int A[], int x, int size, int x_index){
   for(int i=0; i<size; i++){
      x_index = index_of_x(A, x, size);
      if(A[i]>x && i<x_index){
         swap(A, i, x_index);
      }
      else if(A[i]<x && i>x_index){
         swap(A, i, x_index);
      }
   } 
   x_index = index_of_x(A, x, size); 
   if(check_arrange(A, x, size, x_index)){
      return 1;
   } 
   else {
      rearranges_x(A, x, size, x_index);
   }
}

int check_arrange(int A[], int x, int size, int x_index){
   for(int i=0; i<x_index; i++){
      if(A[i]<x) continue;
      else return 0;
   }
   for(int i=x_index+1; i<size; i++){
      if(A[i]>x) continue;
      else return 0;
   }
   return 1;
}

int swap(int A[], int i, int x_index){
   int temp;
   temp = A[i];
   A[i] = A[x_index];
   A[x_index] = temp;
}