#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int rearranges_x(int A[], int x, int size, int x_index);
int swap(int A[], int i, int x_index);
int full_sort(int A[], int x, int size, int x_index);
int index_of_x(int A[], int x, int size);
int check_arrange(int A[], int x, int size, int x_index);
int check(int A[], int size);
int full_size;

void main(){
    int n;
    scanf("%d", &n);
    int A[MAX];
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    full_size = n;
    int x_index = n-1;
    int x = A[x_index];
    full_sort(A, x, n, x_index);
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

int full_sort(int A[], int x, int size, int x_index){
    rearranges_x(A, x, size, index_of_x(A, x, size));
    if(check) return 1;
    else{
        int temp = x_index;
        x_index = x_index-1;
        x = A[x_index];
        full_sort(A, x, full_size, x_index);
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

int swap(int A[], int i, int x_index){
   int temp;
   temp = A[i];
   A[i] = A[x_index];
   A[x_index] = temp;
}

int index_of_x(int A[], int x, int size){
   for(int i=0; i<size; i++){
      if(A[i]==x) return i;
   }
}

int check(int A[], int full_size){
    for(int i=1; i<full_size; i++){
        if(A[i-1]>A[i]) return 0;
        
    }
    return 1;
}
