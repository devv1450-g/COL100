#include <stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        // printing the inverted pyramid
        for(int j=n; j>=i; j--){
            printf("%d", j);
        }
        for(int j=i+1; j<=n; j++){
            printf("%d", j);
        }
        // new line
        printf("\n");
        // for spaces
        int j = i;
        while(j){
            printf(" ");
            j--;
        }
    }
}