#include<stdio.h>

void main(){
    int n;
    char str[n+1];
    scanf("%d %[^\n]s", &n, &str);
    int num_char = 0;
    for(int i=0; i<=n; i++){
        if((str[i]!=' ') || (str[i]!='\t')){    //
            if((str[i-1]==' ') || (str[i-1]=='\t')){
                num_char++;
            }
        }
    }
    printf("%d\n", num_char);
} 