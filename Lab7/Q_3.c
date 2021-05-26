#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int check = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]!=a[j][i]){
                check = 0;
                break;
            }           
        }
    }
    if(check){
        printf("Symmetric\n");
    }
    else{
        printf("Not Symmetric\n");
    }
}