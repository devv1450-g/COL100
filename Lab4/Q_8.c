#include <stdio.h>


int main(){
        int n, i, a, b, sum, check, count;
        scanf("%d", &n);
        for(i=1; i<=n; i++){
                for(a=0; a<=n; a++){
                        for(b=0; b<=n; b++){
                                sum = a*a + b*b;
                                if(sum == i){
                                        check = 1;
                                        break;
                                }
                        }
                        if(check==1) break;
                }
                if(check==1){
                        count++;
                        check = 0;
                }
        }


        printf("%d", count);
}