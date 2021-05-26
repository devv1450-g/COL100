#include <stdio.h>

void main(){
    int size;
    scanf("%d", &size);
    int a[size];
    // input for array
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    // finding the largest and smallest
    int largest = a[0], i_l;
    int smallest = a[0], i_s;
    for(int i=0; i<size; i++){
        if(a[i]>largest){
            largest = a[i];
            i_l = i;
        }
        if(a[i]<smallest){
            smallest = a[i];
            i_s = i;
        }
    }
    // swapping
    a[i_l] = smallest;
    a[i_s] = largest;
    // printing the array
    for(int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}