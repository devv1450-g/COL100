#include<stdio.h>
#include<math.h>

int check_prime(int x){
    int check = 0;
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0){
            check = 0;
            break;
        }
        check = 1;
    }
    return check;
}

void main(){
    int n;
    scanf("%d", &n);
    printf(check_prime(n)? "true\n":"false\n");
}