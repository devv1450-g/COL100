#include <stdio.h>

void main(){
    int size;
    scanf("%d", &size);
    int a[size];
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    int feq, x;
    feq = 0;
    scanf("%d", &x);
    for(int i=0; i<size; i++){
        if(a[i]==x){
            feq++;
        }
    }
    printf("%d\n", feq);
}