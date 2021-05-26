#include <stdio.h>

void main(){
    int n, b;
    scanf("%d%d", &n, &b);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(a[i]+a[j]==b){
                printf("%d %d\n", a[i], a[j]);
            }
        }
    }
}