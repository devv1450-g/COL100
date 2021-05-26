#include<stdio.h>

void main(){
    int num_tri, num_row;
    scanf("%d%d", &num_tri, &num_row);
    printf("*** CHRISTMAS TREE ***\n");
    for(int i=1; i<=num_tri; i++){
        for(int j=1; j<=num_row; j++){
            for(int k=1; k<=num_row-j; k++){
                printf(" ");
            }
            for(int x=1; x<=j*2-1; x++){
                printf("*");
            }
            printf("\n");
        }
    }
    for(int i=1; i<=num_row; i++){
        for(int j=1; j<=num_row-2; j++){
            printf(" ");
        }
        printf("***\n");
    }
}