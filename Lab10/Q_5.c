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
   // calling funtion for rearranging array
   rearranges_x(A, x, n, index_of_x(A, x, n));
   // printing the new array
   for(int i=0; i<n; i++){
      printf("%d ", A[i]);
   }  
   printf("\n");
}

// for finding the index of x
int index_of_x(int A[], int x, int size){
   for(int i=0; i<size; i++){
      if(A[i]==x) return i;
   }
}

int rearranges_x(int A[], int x, int size, int x_index){
   for(int i=0; i<size; i++){
      x_index = index_of_x(A, x, size);
      // swapping the positon if larger number is to the left of x
      if(A[i]>x && i<x_index){
         swap(A, i, x_index);
      }
      // swapping the position if smaller number is to the right of x
      else if(A[i]<x && i>x_index){
         swap(A, i, x_index);
      }
   } 
   x_index = index_of_x(A, x, size);
   // if array rearranged then exit the code 
   if(check_arrange(A, x, size, x_index)){
      return 1;
   } 
   // recursion if not got the required array
   else {
      rearranges_x(A, x, size, x_index);
   }
}

// for checking that we have got the required rearrange array
int check_arrange(int A[], int x, int size, int x_index){
   // for number less than x
   for(int i=0; i<x_index; i++){
      if(A[i]<x) continue;
      else return 0;
   }
   // for number grater than x
   for(int i=x_index+1; i<size; i++){
      if(A[i]>x) continue;
      else return 0;
   }
   return 1;
}


// swaping they x with given smaller/larger number
int swap(int A[], int i, int x_index){
   int temp;
   temp = A[i];
   A[i] = A[x_index];
   A[x_index] = temp;
}