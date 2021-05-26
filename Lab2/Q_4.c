#include <stdio.h>

int main(){
    int x, n, i, y;
    scanf("%d%d", &x, &n);
    y = x;
    if (n>0){  
         for (i=1; i<n; ++i){
                y *= x;
        }
         printf("%d \n", y);
       
    }
    else if(n<0){
        for (i=1; i<-n; ++i){
                y *= x;               
        }
        float d = 1/(float)y;
        printf("%f \n", d);
    }
    else {
        y = 1;
        printf("%d \n", y);
    }
      return 0;
    
}