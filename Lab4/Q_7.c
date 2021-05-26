#include <stdio.h>

void main(){
    int n, sum, ct, num, i, j, temp;
    num = 0;
    temp = 0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        ct = 0;
        sum = 0;
        temp = i;
        while(temp!=0){
            sum = sum + temp%10;
            temp = temp/10;
        }
        for(j=1; j<=i; j++){
            if(j%sum==0){
                ct++;
            }
        }
        num = num + ct;
    }
    printf("%d\n", num);
}