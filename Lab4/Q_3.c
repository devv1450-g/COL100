#include <stdio.h>

void main(){
    int n, z, temp, i;
    scanf("%d", &n);
    z = n;
    for(i=1; i<=n; i++){
        
        temp = 1;
        while(temp < i){
            printf(" ");
            temp++;
        }
        temp = 1;
        while(temp <= i){
            printf("#");
            temp++;
        }
        temp = 4*z-4;
        while(temp > 0){
            printf(" ");
            temp--;
        }
        z--;
        temp = 1;
        while(temp <= i){
            printf("#");
            temp++;
        }
        printf("\n");
    }

    for(i=n; i>0; i--){
        z = i;
        temp = i;
        while(temp > 1){
            printf(" ");
            temp--;
        }
        temp = i;
        while(temp > 0){
            printf("#");
            temp--;
        }   
        temp = 4*z-4;
        while(temp < 4*n-4){
            printf(" ");
            temp++;
        }
        temp = i;
        while(temp > 0){
            printf("#");
            temp--;
        }
        printf("\n");
    }
    
}