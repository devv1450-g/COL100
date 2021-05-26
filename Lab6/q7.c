#include <stdio.h>

void main(){
    int size;
    scanf("%d", &size);
    int a[size];
    // input for array
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    // input for right shift
    int shift;
    scanf("%d", &shift);
    for(int i=0; i<size; i++){
        printf("%d ", a[(i+size-shift)%size]);
    }
    printf("\n");
}